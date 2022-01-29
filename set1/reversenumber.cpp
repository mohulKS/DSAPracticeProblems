#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0,i=1;
    while(n)
    {
        x = x*i + n%10;
        i=10;
        n=n/10;
    }
    cout<<"Reverse number :"<<x;
    return 0;
}
