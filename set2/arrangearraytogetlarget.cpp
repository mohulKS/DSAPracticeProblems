#include<bits/stdc++.h>
using namespace std;
int compare(string, string);

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(), compare);
    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }

}

int compare(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return x.compare(yx) > 0? 1:0;
}
