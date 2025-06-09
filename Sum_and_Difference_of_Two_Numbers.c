#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a+b,d=a-b;
    float a1,b1,c1,d1;
    scanf("%f %f",&a1,&b1);
    c1=a1+b1,d1=a1-b1;
    printf("%d %d\n%.1f %.1f",c,d,c1,d1);
    return 0;
}