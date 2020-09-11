#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string line[77];
    ifstream myFile("vps.txt");
    for (int i=0;getline(myFile,line[i]);++i)
    {

    }
    int numberOfBoards;
    int dif;
    cout<<"Number of boards:";
    cin>>numberOfBoards;
    cout<<"IMP difference:";
    cin>>dif;
    if (dif>73)
    {
        cout<<"20.00\n";
        return 0;
    }
    int a=(numberOfBoards-5)*5;
    for (int i=a;i<a+5;++i)
    {
        cout<<line[dif-1][i];
    }
    cout<<'\n';

    return 0;
}
