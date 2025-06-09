/*https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    int flag=0;
    for(int i =0;i<10000;i++)
    {
        if((x1+(v1*i))==(x2+(v2*i)))
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}