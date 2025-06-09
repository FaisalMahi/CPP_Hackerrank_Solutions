#include<stdio.h>
int main()
{
    int ar[4], max=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>=max)
        {
            max=ar[i];
        }
    }
    printf("%d",max);
    return 0;
}