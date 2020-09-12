#include <iostream>
#include <fstream>

std::pair <int, int> imp[30];

int binary(int l, int r, int s)
{
    if (r-l<=1)
    {
        if (imp[r].first<=s) return r;
        return r;
    }
    int mid=(l+r)/2;
    if (imp[mid].first>=s) return binary(l, mid, s);
    else return binary(mid, r, s);
}

int main()
{
    int diff;
    std::cin>>diff;
    std::ifstream file;
    std::string l;
    file.open("imps");
    int ind;
    for (ind=0;std::getline(file, l);++ind)
    {
        for (int i=0;l[i]!=' ';++i)
        {
            imp[ind].first*=10;
            imp[ind].first+=(l[i]-'0');
        }
        if (l[l.size()-2]!=' ') imp[ind].second+=(l[l.size()-2]-'0')*10;
        imp[ind].second+=l[l.size()-1]-'0';
    }
    if (diff>=4000) std::cout<<24<<'\n';
    else std::cout<<imp[binary(0, ind, diff)].second<<'\n';

    return 0;
}
