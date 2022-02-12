#include<bits/stdc++.h>
#include<string>
using namespace std;
int isPalindrome(int, int, string);

int main()
{
    string x;
    cin>>x;
    int len = x.size()-1;
    int res = isPalindrome(0, len,x);
    if(res==1)
    cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
}

int isPalindrome(int a, int b, string x)
{
    if(a==b || b-a==1)
        return 1;
    else
    {
        if(x[a]==x[b])
            return isPalindrome(a+1, b-1, x);
        else
            return 0;
    }
}
