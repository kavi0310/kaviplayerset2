#include<stdio.h>
int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
        a[i]=a[i]+3;
        if(a[i]>=122)
        {
            a[i]=a[i]-26;
        }
        printf("%c",a[i]);
        }
        if(a[i]>=65&&a[i]<=90)
        {
        a[i]=a[i]+3;
        if(a[i]>=90)
        {
            a[i]=a[i]-26;
        }
        printf("%c",a[i]);
        }
    }
}
