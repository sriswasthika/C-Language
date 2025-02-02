#include <stdio.h>

int main()
{
   int i=1, n;
   scanf("%d",&n);
   while(i<=n)
   {
       if(i!=3 && i!=7)
       printf("%d",i);
       i++;
   }

    return 0;
}
