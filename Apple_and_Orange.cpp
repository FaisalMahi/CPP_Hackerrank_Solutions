/*https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,sum_m=0,sum_n=0;
    cin>>s>>t>>a>>b>>m>>n;
    int ar[m],ar1[n];
    for(int i = 0;i<m;i++)
    {
        cin>>ar[i];
        if(ar[i]>0)
        {
            if((ar[i]+a)>=s&&(ar[i]+a)<=t)
            {
                sum_m++;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        cin>>ar1[i];
        if(ar1[i]<0)
        {
            if((ar1[i]+b)>=s&&(ar1[i]+b)<=t)
            {
                sum_n++;
            }
        }
    }

    cout<<sum_m<<endl<<sum_n;

    return 0;
}