#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,mx=0,sum=0; 
    cin>>n;
    vector<long long int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

        if(v[i]>=mx)
        {
           mx=v[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mx==v[i])
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}