#include <stdio.h>

int main()
{
   int n,r,c,a=1;
   scanf("%d",&n);
   for(r=1;r<=n;r++,printf("\n"))
   {
       for(c=n;c>r;c--)
       printf(" ");
       for(c=1;c<=r;c++)
       printf("%d ",a++);
       
       
   }

    return 0;
}
