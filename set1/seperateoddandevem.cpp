#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector <int> even;
    vector <int> odd;
    int e=0;
    int o=0;
    for(int i=0;i<n;i++)
    {
        if(v1[i]%2==0)
        {
            even.push_back(v1[i]);
            e++;
        }
        else
        {
            odd.push_back(v1[i]);
            o++;
        }
    }
    vector <int> v2;
    for(int j=0;j<e;j++)
        v2.push_back(even[j]);
    for(int i=0;i<o;i++)
        v2.push_back(odd[i]);

    for(int i=0;i<n;i++)
        cout<<v2[i]<<" ";

    return 0;
}
