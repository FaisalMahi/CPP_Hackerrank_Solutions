#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long int ar[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}