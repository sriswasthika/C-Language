#include <stdio.h>

int main()
{
   int n,r,c,a=0;
   scanf("%d",&n);
   for(r=1;r<=n;r++,printf("\n"))
   {
       for(c=1;c<=n;c++)
       {
           if(r%2)
           printf("%d ",++a);
           else
           printf("%d ",a--);
       }
       a+=n;
   }
    return 0;
}
