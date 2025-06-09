#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int cnt[6]={0};
    for(int i =0;i<n;i++)
    {
        cnt[ar[i]]++;
    }    
    long long int max = cnt[1];
    int min = 1;
    for(int i = 1;i<=5;i++)
    {
        if(cnt[i]>max)
        {
            max = cnt[i];
            min = i;
        }
    }
    cout<<min;
    return 0;
}