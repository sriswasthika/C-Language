#include <stdio.h>

int main()
{
    int n,r=0;
    scanf("%d",&n);
    rev:
    
    r=r*10+n%10;
    n/=10;
    if(n!=0)
    goto rev;
    printf("%d",r);

    return 0;
}
