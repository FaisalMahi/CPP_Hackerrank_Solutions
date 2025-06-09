/*https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,divisor,sum=0;
    cin>>n1>>n2>>divisor;
    

    for(int i=n1;i<=n2;i++)
    {
        int i1 = i,rev_n=0;
        while(i1>0)
        {
        int lastdigit = i1%10;
        rev_n = rev_n *10 + lastdigit;
        i1 = i1 / 10;
        }  
        int newsum = i -rev_n;
        if(newsum < 0)
        {
            newsum = newsum * (-1);
        }
        if(newsum % divisor == 0)
        {
            sum++;
        }
    }

    cout<<sum; 
       
    return 0;
}