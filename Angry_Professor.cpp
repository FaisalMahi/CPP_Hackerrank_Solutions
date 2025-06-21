/*https://www.hackerrank.com/challenges/angry-professor/problem*/
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int x;cin>>x;
    while(x>0)
    {
            int n,k,sum=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=0)
        {
            sum++;
        }
    }
    if(sum<k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    x--;
    }
    return 0;
}
