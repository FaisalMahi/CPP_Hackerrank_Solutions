#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,k,d,result = -1;
    cin>>b>>k>>d;
    int key[k],usb[d];
    for(int i =0;i<k;i++)
    {
        cin>>key[i];
    }
    for(int i =0;i<d;i++)
    {
        cin>>usb[i];
    }
    for(int i =0;i<k;i++)
    {
        for(int j =0;j<d;j++)
        {
            int temp = key[i]+usb[j];
            if(temp<=b&&temp>result) result = temp;
        }
    }
    cout<<result;
    return 0;
}