#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],t;
    int i,j;
    scanf("%s %s",a,b);
    printf("%s ",a);
    
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j];j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;b[i];i++)
    {
        for(j=i+1;b[j];j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    if(!strcmp(a,b))
    printf("anagram");
    else
    printf("no");
    
    

    return 0;
}

