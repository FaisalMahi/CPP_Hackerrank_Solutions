#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    cin>>a>>b;
    char c[2000];
    strcpy(c,a);
    strcat(a,b);
    cout<<strlen(c)<<" "<<strlen(b)<<endl;
    cout<<a<<endl;
    cout << b[0] << c + 1 << " " << a[0] << b + 1 <<endl;
    
    return 0;
}
