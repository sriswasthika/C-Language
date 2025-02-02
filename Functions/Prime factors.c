#include <stdio.h>

int prime(int n)
{
    int i=2,r;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            return 0;
        }
        i++;
    }
        return 1;    
}
int main()
{
    int n,i=2;
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0 && prime(i))
        printf("%d ",i);
        i++;
    }
    
}
