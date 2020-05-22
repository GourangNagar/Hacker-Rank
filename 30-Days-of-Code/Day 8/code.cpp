#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n,i;
    string name;
    long int no;
    cin>>n;
    map<string,int>dnry;
    for(i=0;i<n;i++)
    {
        cin>>name;
        cin>>no;
        dnry[name]=no;
    }
    while(cin>>name)
    {
        if(dnry.find(name)!=dnry.end())
        {
            cout<<name<<"="<<dnry.find(name)->second<<"\n";
        }
        else
        cout<<"Not found\n";
    }
    return 0;
}
