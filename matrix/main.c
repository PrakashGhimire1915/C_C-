#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],i,j,sum[2][2];
    printf("Enter the element of 1st matrix:\n");
    for(i=0; i<2; i++)
    {
    for(j=0; j<2; j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter the element of 2nd matrix:\n");
    for(i=0; i<2; i++)
    {
    for(j=0; j<2; j++)
    {
        scanf("%d",&b[i][j]);
    }}
    printf("The sum of elements is:");
    for(i=0; i<2; i++)
    {
    for(j=0; j<2; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
    }
    for(i=0; i<2; i++)
    {
    printf("\n");
    for(j=0; j<2; j++)
    {
    printf("%d\t",sum[i][j]);
    }
    }
return 0;
}
