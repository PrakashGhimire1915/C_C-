#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,b=1,c,i,n;
    printf("Enter numbers you want:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=0; i<n; i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    return 0;
}
