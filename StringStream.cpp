#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000000];
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==',')
        {
            a[i]='\n';
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i];
    }
    return 0;
}