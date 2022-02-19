#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        cout<<char(i+97)<<"is "<<arr[i];
        cout<<endl;
    }
}

//input aaabbbccc
//output a is 3 b is 2 c is 3
