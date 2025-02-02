#include <stdio.h>

int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++,printf("\n"))
    {
        for(c=1;c<=n;c++)
        {
            if(c==1||c==n||r==1||r==n)
            printf("* ");
            else
            printf("  ");
        }
    }

    return 0;
}
