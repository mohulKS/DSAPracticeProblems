#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n)
    {
        sum += n%10;
        n = n/10;
    }
    cout<<"Sum: "<<sum;
    return 0;
}
