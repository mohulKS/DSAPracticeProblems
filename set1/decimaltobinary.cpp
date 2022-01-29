#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int long long bin=0;
    while(n)
    {
        int x = n%2;
        bin += x*i;
        i = i*10;
        n=n/2;
    }
    cout<<"Decimal to Binary: "<<bin;
    return 0;
}
