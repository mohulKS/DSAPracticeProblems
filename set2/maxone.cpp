#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int k=-1;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int ones=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
                ones++;
        }
        if(k<ones)
        {
            k = ones;
            index = i;
        }
    }
    cout<<index;
}
/*
0 1 1 1
0 0 1 1
1 1 1 1  // this row has maximum 1s
0 0 0 0

Output: 2*/
