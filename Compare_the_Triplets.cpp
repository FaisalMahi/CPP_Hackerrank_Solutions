/*https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum_v=0,sum_v1=0;
    vector<int> v(3);
    vector<int> v1(3);
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>v1[i];
    }
    if(v[0]-v1[0]>0)
    {
        sum_v++;
    }
    else if(v[0]-v1[0]<0)
    {
        sum_v1++;
    }
    if(v[1]-v1[1]>0)
    {
        sum_v++;
    }
    else if(v[1]-v1[1]<0)
    {
        sum_v1++;
    }
    if(v[2]-v1[2]>0)
    {
        sum_v++;
    }
    else if(v[2]-v1[2]<0)
    {
        sum_v1++;
    }
    cout<<sum_v<<" "<<sum_v1;
    return 0;
}