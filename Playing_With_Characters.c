#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    scanf("%c\n",&a);
    char b[101];
    scanf("%s\n",b);
    char c[101];
    fgets(c,101,stdin);
    c[strlen(c)]='\0';    
    
    printf("%c\n%s\n%s",a,b,c);
    return 0;
}