#include<bits/stdc++.h>
using namespace std;
string reverseWord(int, int, string);
int main()
{
    string s;
    cin>>s;
    cout<<reverseWord(0, s.size()-1, s);
    //cout<<s;
}

string reverseWord(int a, int b, string s)
{
    while(a<b)
    {
        char m = s[a];
        s[a] = s[b];
        s[b] = m;
        a++;
        b--;
    }
    return s;
}
