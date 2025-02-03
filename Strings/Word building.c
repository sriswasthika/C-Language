#include <stdio.h>

int main()
{
    char a[100];
    int i,l,f=1;
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(a[i]==',' && a[i-1]!=a[i+1])
        {
            f=0;
            break;
           
        }
    }
   /* if(f && a[0]==a[i-1])
    printf("yes");
    else
    printf("no");*/
    printf(f && a[0]==a[i-1]?"yes":"no");

    return 0;
}
