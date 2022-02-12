#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1=0,n2=1;
    int n;
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for(int i=0;i<n-2;i++)
    {
        int x;
        cout<<n2+n1<<" ";
        x = n1;
        n1 = n2;
        n2 = n2 + x;
    }
}
