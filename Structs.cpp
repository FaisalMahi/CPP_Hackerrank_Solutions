#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000000];
    cin>>a;
    for(int i=0;a[i]!=strlen(a);i++)
    {
        if(a[i]=='\n')
        {
            a[i]=' ';
        }
    }
    for(int i=0;a[i]!='\0';i++)
    {
        cout<<a[i];
    }
    return 0;
}