#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,l,j=0;
    scanf("%s",a);
    for(l=0;a[l];l++);
    for(i=0;a[i];i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        a[i]+=32;
    }
    for(i=l-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    if(!strcmp(a,b))
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }

    return 0;
}

