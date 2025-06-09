/*https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    int sum_r=0,sum_l=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum_r+=ar[i][j];
            }
            if(i+j==n-1)
            {
                sum_l+=ar[i][j];
            }
        }
    }
    int sum_t=sum_r-sum_l;
    if(sum_t<0)
    {
        sum_t=sum_t*(-1);
        cout<<sum_t;
    }
    else 
    {
        cout<<sum_t;
    }

    
    return 0;
}