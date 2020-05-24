#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,k=2,j;
    printf("Enter number of rows");
    scanf("%d",&n);
    for(j=0;j<=n;j++){
        for(c=1;c<=2*n-k;c++)
            printf(" ");
            k=k+2;
            for(c=1;c<=j;c++)
                printf("*   ");
                printf("\n");

    }
    return 0;
}
