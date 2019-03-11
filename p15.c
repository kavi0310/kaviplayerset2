#include<stdio.h>
int main()
{
    char a[100],d[1];
    int i,j,c=0,b=0,f=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        c=0;
    for(j=i+1;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        c++;
        if(c>b)
        {
        b=c;
        d[1]=a[i];
        break;
        }
    }
    }
    printf("%c ",d[1]);
}
