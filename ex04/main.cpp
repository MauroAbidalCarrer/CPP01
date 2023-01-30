#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


bool setup(int ac, char **av, std::ifstream& srcFile, std::ofstream& dstFile)
{
    if (ac != 4)
    {
        std::cerr << "ERROR:user should input 3 arguments!" << std::endl;
        return true;
    }
    if (av[2][0] == 0 || av[3][0]== 0)
        return true;
    std::string fileName = av[1];
    srcFile.open(fileName.c_str());
    if (srcFile.fail())
    {
        std::cerr << "ERROR:could not open " << fileName << " file!" << std::endl;
        return true;
    }
    fileName += + ".replace";
    dstFile.open(fileName.c_str(), std::ios::trunc);
    if (dstFile.fail())
    {
        std::cerr << "ERROR:could not open " << fileName << " file!" << std::endl;
        return true;
    }
    return false;
}

std::string getFileContent(std::ifstream& srcFile)
{
	std::stringstream sStream;
    sStream << srcFile.rdbuf();
    std::string content = sStream.str();
    sStream.clear();
    return content;
}

void replaceOccurences(std::string& srcFileContent, std::string occurence, std::string newString)
{
    size_t pos;
    while (1)
    {
        pos = srcFileContent.find(occurence);
        if (pos == std::string::npos)
            break ;
        srcFileContent.erase(pos, occurence.length());
        srcFileContent.insert(pos, newString);
    }
}

int  main(int ac, char **av)
{
    std::ifstream srcFile;
    std::ofstream dstFile;
    if (setup(ac, av, srcFile, dstFile))
        return 1;
    std::string content = getFileContent(srcFile);
    replaceOccurences(content, av[2], av[3]);
    dstFile << content;
}