#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 0 ... 40:
        printf("A"); break;
        case 41 ... 60:
        printf("B"); break;
        case 61 ... 80:
        printf("C"); break;
        case 81 ... 100:
        printf("D"); break;
        default:
        printf("Invalid");
    }

    return 0;
}
