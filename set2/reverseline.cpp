#include<bits/stdc++.h>
#include<vector>
using namespace std;
string reverseLine(int,int, string);
int main()
{
    string s;
    getline(cin, s);
    reverseLine(0, s.size()-1, s);
}

string reverseLine(int a, int b, string s)
{
    vector<string> v;
    int j=0;
    char sp = ' ';
    for(int i=0;i<=b;i++)
    {
        if(s[i]==sp)
        {
            j++;
        }
        else
            v[j].push_back(s[i]);
    }
    cout<<1;
    for(int m=j-1;m>=0;m--)
    {
        cout<<v[m]<<" ";
    }
}
