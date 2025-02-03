#include <stdio.h>
#include<string.h>

int main()
{
    char a[1000],x,y;
    int i,j;
    scanf("%[^\n]",a);
    x=a[i];
    for(i=0;i<a[i];i++)
    {
        if(x>='A' && x<='Z')
        {
            x+=32;
        }
        if(x!='a'||x!='e'||x!='i'||x!='o'||x!='u'||x!=' ')
        {
            for(j=i+1;j<=a[i];j++)
            {
               y=a[j];
               if(y>='A' && y<='Z')
               {
                   y+=32;
               }
               if(x==y)
               {
                   y==' ';
               }
              printf("%c",a[i]); 
            }
            
        }
       
    }
     

    return 0;
}
