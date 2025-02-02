#include <stdio.h>

float squareroot(int n)
{
    float sq,t=0.0;
    sq=n/2;
    while(sq!=t)
    {
        t=sq;
        sq=(n/t+t)/2;
    }
    return sq;
    
}
int main()
{
    int n;
    float x;
    scanf("%d",&n);
    x=squareroot(n);
    if(x==(int)x)
    printf("%.0f",x);
    else
    printf("%.3f",x);
    return 0;
}
