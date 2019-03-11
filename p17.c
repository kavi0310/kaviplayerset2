#include <stdio.h>

int main()
{
   int l,r,i=1,k;
   scanf("%d%d",&l,&r);
  if(l>r)
  k=r;
  else
  k=l;
  while(i)
  {
      if(k%l==0&&k%r==0)
      {
          printf("%d",k);
      break;
      }
      k++;
  }
}
