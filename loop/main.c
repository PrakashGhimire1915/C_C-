#include <stdio.h>
int greater(int a[],int n);

int main()
{
    int a[n],i;
    printf("enter how many number you want to enter:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("enter the number:");
        scanf("%d",a[i]);
    }
    printf("greater number is %d",greater(a));
}
int greater(int a[])
{
    int g=a[0],i,n;
    for(i=0; i<=n; i++)
        if(g>a[i])
        return g;
}
