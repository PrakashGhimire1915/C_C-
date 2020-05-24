#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,greatest;
    for(i=0; i<20;i++)
    {
    printf("Enter number:\n");
    scanf("%d",&a[i]);
    }
    greatest=a[0];
    for(i=0; i<20; i++)
    {
        if(a[i]>a[0])
            greatest=a[i];
    }
    printf("Greatest number is:%d",greatest);
    return 0;
}
