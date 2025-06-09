#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    if(d<0)
    {
       d=d*(-1);
    }
    printf("%d\n%d",c,d);
    return 0;
}