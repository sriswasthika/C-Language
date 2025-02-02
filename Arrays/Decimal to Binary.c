#include <stdio.h>

int main()
{
    int n,a,x,i,c=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a==x)
        c++;
    }
    printf("%d",c);
}
