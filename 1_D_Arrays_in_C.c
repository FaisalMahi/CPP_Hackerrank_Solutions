#include<stdio.h>
#include<limits.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    }
    int i=0;
    while(i<n)
    {
        count=count+ar[i];
        i++;
    }
    printf("%d",count);
    return 0;
}