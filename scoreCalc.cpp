#include <iostream>
#include <string>
#include <fstream>

std::ifstream file;

void outputTheFile()
{
    std::string l;
    while (std::getline(file, l)) std::cout<<l<<'\n';
}

int main()
{
    std::string score;
    std::getline(std::cin, score);
    if (score=="x" or score=="X" or score=="double")
    {
        file.open("double_scores.txt");
        outputTheFile();
        return 0;
    }
    if (score=="pass")
    {
        file.open("pass");
        outputTheFile();
        return 0;
    }
    if (score=="xx" or score=="XX")
    {
        file.open("redouble");
        outputTheFile();
        return 0;
    }
    if (score[2]=='d') score[2]='c';
    if (score[2]=='s') score[2]='h';
    switch (score[0])
    {
        case '1':
            switch (score[2])
            {
                case 'c':
                    file.open("1club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("1heart");
                    outputTheFile();
                    return 0;

                case 'N':
                    return 0;
            }
        case '2':
            switch (score[2])
            {
                case 'c':
                    file.open("2club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("2heart");
                    outputTheFile();
                    return 0;

                case 'N':
                    return 0;
            }
        case '3':
            switch (score[2])
            {
                case 'c':
                    file.open("3club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("3heart");
                    outputTheFile();
                    return 0;

                case 'N':
                    return 0;
        }
        case '4':
            switch (score[2])
            {
                case 'c':
                    file.open("4club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("4heart");
                    outputTheFile();
                    return 0;

                case 'N':
                    return 0;
            }
        case '5':
            switch (score[2])
            {
                case 'c':
                    file.open("5club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("5heart");
                    outputTheFile();
                    return 0;

                case 'N':
                    return 0;
            }
        case '6':
            switch (score[2])
            {
                case 'c':
                    file.open("6club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("6heart");
                    outputTheFile();
                    return 0;
                
                case 'N':
                    return 0;
            }
        case '7':
            switch (score[2])
            {
                case 'c':
                    file.open("7club");
                    outputTheFile();
                    return 0;

                case 'h':
                    file.open("7heart");
                    outputTheFile();
                    return 0;
                
                case 'N':
                    return 0;
            }
    }


    return 0;
}
