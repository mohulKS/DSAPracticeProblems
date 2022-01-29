#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
        i++;
    }
    cout<<"Sum: "<<sum;
    return 0;
}
