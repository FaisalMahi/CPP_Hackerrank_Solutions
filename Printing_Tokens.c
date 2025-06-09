#include<stdio.h>
#include<string.h>
int main()
{
    char st[1001];
    fgets(st,1001,stdin);
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]==' ')
        {
            st[i]='\n';
        }
    }
    printf("%s",st);
    return 0;
}