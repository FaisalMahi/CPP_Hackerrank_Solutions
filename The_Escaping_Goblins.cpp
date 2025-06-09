#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k; cin>>a>>b>>k;
    int ans;
    if(a>b) ans=a-b;
    else ans=b-a;
    if(ans>k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}