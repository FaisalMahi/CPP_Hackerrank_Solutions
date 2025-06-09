/*https://www.hackerrank.com/challenges/mini-max-sum/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long int> v(5);
    
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    long long int sum=0,mn=9223372036854775807,mx=INT_MIN;
    for(int i=0;i<5;i++)
    {
        sum =sum+v[i];
    }
    long long int total_sum=sum;
    for(int i=0;i<5;i++)
    {
        sum =sum-v[i];
        if(sum>=mx)
        {
            mx=sum;
        }
        if(sum<=mn)
        {
            mn=sum;
        }
        sum=total_sum;
    }
    cout<<mn<<" "<<mx;
    
    return 0;
}