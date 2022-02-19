#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum1= INT_MIN, sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum2 += arr[i];
        if(sum1<sum2)
            sum1 = sum2;
        if(sum2<0)
            sum2=0;
    }
    cout<<sum1;
}
