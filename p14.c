#include<stdio.h>
int main()
{
    int n,i,j=0,l=0;
    char a[100],b[100];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
        {
        b[j]=a[i];
        j++;
        l++;
        }
    }
    for(j=l-1;j>=0;j--)
    {
    printf("%c",b[j]);
    }
}
