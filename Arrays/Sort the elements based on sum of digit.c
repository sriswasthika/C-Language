#include <stdio.h>

int main()
{
    int f=1,a[100],n,x,i;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i++)
    {
        if(a[i]==x)
        {
            printf("%d",i);
            f=0;
            return 0;
        }
    }
    if(f==1)
    printf("not found");
    return 0;
}

