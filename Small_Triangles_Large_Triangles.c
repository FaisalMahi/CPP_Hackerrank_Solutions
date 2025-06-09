#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int p=((a+b+c)/2);
        int area= sqrt((p*(p-a)*(p-b)*(p-c)));
        printf("%d ",area);
    }
    
    return 0;
}  