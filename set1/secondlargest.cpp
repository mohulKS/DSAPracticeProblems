#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(maxx<arr[i])
            maxx = arr[i];
    }
    int maxx2 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(maxx2< arr[i] && arr[i]!=maxx)
            maxx2 = arr[i];
    }
    cout<<"The second largest element is "<<maxx2;
}
//Input: arr[] = {12, 35, 1, 10, 34, 1}
//Output: The second largest element is 34.
