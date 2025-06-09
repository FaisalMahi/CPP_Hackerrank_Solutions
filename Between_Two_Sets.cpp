#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector <int>v(m);
    vector <int>v1(n);
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    for(int i=1;i<=v1[n-1]/2;i++)
    {
        
    }
    return 0;
}