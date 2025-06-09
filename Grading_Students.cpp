/*https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int marks;
        cin>>marks;
        if(marks>=38)
        {
            int mod = marks % 5;
            if(mod==3 || mod==4)
            {
                marks = ((marks/5)+1)*5;
            }
        }
         cout<<marks<<endl;
    }
    return 0;
}