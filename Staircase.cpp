#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int s=n-1,k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<k;j++)
        {
            cout<<"#";
        }
        s--;
        k++;
        cout<<endl;
    }
    return 0;
}