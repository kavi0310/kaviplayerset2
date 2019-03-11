#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,f=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='s')
{
if(a[i+1]=='a'||a[i+1]=='u')
if(a[i+2]=='t'||a[i+2]=='n')
f=1;
}
}
if(f==1)
printf("yes");
else
printf("no");
getch();
}
