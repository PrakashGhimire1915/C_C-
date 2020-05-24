#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a<0)
        printf("a is negative");
    else
        printf("a is positive");
    return 0;
}
