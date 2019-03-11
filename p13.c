#include<stdio.h>
int main()
{
    int n,a,r,s=0,b;
    scanf("%d",&n);
    a=n;
    while(a)
    {
        r=a%10;
        b=r*r;
        a=a/10;
        s=s+b;
    }
    printf("%d",s);
    return 0;
}
