#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int decimal=0,c=0;
    while(n)
    {
        int x = n%10;
        decimal += x*pow(2,c);
        c++;
        n = n/10;
    }
    cout<<"Binary to decimal: "<<decimal;
    return 0;
}
