#include <stdio.h>

int main()
{
   int x,y;
	scanf("%d%d",&x,&y);
	x=x+y-(y=x);
	printf("%d %d",x,y);

    return 0;
}
