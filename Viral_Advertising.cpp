/*https://www.hackerrank.com/challenges/strange-advertising/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day,cumulate=0,shared = 5;
    cin>>day;
    
    for(int i=1;i<=day;i++)
    {
        if(i!=1)
        {
            shared = (shared/2)*3;
        }
        int like = shared / 2;
        cumulate = cumulate + like;
    }
    cout<<cumulate<<endl; 
    return 0;
}