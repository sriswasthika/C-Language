#include <stdio.h>

int main()
{
   char a='A';
   int n,r,c;
   scanf("%d",&n);
   for(r=n;r>=1;r--,printf("\n"))
   
       for(c=1;c<=r;c++)
       printf("%c ",a++);
   
    return 0;
}
