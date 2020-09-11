#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string score;
    std::getline(std::cin, score);
    if (score=="x" || score=="X" || score=="double")
    {
        std::string l;
        std::ifstream file;
        file.open("double_scores.txt");
        while (std::getline(file, l)) std::cout<<l<<'\n';
        return 0;
    }
    if (score=="pass")
    {
        std::string l;
        std::ifstream file;
        file.open("pass");
        while (std::getline(file, l)) std::cout<<l<<'\n';
        return 0;
    }
    


    return 0;
}
