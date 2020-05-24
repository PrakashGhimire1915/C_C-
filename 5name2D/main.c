#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[5][30];
    int n=5,i;
    printf("Enter the name:\n");
    for(i=0; i<n; i++)
    {
        scanf("%s",name[i]);
    }
    printf("The recorded name are:\n");
    for(i=0; i<n; i++)
    {
        printf("%s\n",name[i]);
    }
return 0;
}
