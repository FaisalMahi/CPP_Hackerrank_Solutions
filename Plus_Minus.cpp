/*https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    float add=0,sub=0,nutrl=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)
        {
            add++;
        }
        else if(v[i]<0)
        {
            sub++;
        }
        else
        {
            nutrl++;
        }

    }
    float addf=add/n,subf=sub/n,nutrlf=nutrl/n;
    cout << fixed << setprecision(6) << addf << endl;
    cout << fixed << setprecision(6) << subf << endl;
    cout << fixed << setprecision(6) << nutrlf << endl;
    return 0;
}