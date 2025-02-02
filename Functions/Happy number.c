#include <stdio.h>

int happy(int n)
{
    int sum=0,t;
    while(n)
    {
        t=n%10;
        sum+=t*t;
        n/=10;
        
    }
    if(sum<10)
    return sum;
    else
    return happy(sum);}
int main()
{
    int n;
    scanf("%d",&n);
    printf(happy(n)==1?"happy":"not");
    return 0;
}
