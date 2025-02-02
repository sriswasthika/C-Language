#include <stdio.h>

int main()
{
   int n,t,f=1;
   scanf("%d",&n);
   while(n>9)
   {
       t=n%10;
       n/=10;
       if(t!=n%10){
       f=0;
       break;}}
       printf(f?"magic number":"not");
   

    return 0;
}
