#include<stdio.h>
int main()
{
    char a[10];
    scanf("%s",&a);
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",(a[i]+3));
    }
    return 0;
}
