/*https://www.hackerrank.com/challenges/time-conversion/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,tr=0;
    char ar[10];
    for(int i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<10;i++)
    {
        if(ar[8]=='P')
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        if(ar[0]=='0'&&ar[1]=='8')
        {
            ar[0]='2';
            ar[1]='0';
        }
        else if(ar[0]=='0'&&ar[1]=='9')
        {
            ar[0]='2';
            ar[1]='1';
        }
        else if(!(ar[0]=='1'&&ar[1]=='2'))
        {
            ar[0]+=1;
            ar[1]+=2;
        }        
        for(int i=0;i<8;i++)
        {
            cout<<ar[i];
        }
    }
    else if (flag==0)
    {
        if(ar[0]=='1' && ar[1]=='2')
        {
             ar[0]=ar[1]='0';
        
        }
        for(int i=0;i<8;i++)
        {
            cout<<ar[i];
        }           
    }
    return 0;
}