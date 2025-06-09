#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,s,lastcandy;
        cin>>n>>m>>s;
        lastcandy = (m+s-1)%n;
        if(lastcandy == 0)
        {
            lastcandy = n;
        }
        cout<<lastcandy<<endl;
    }
    return 0;
}