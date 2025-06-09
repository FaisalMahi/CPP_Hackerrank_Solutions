#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int in;
        cin>>in;
        if(in==0)
        {
            cout<<"YES"<<endl;
        }
        else if(in%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}