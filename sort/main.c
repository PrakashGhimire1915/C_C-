#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[20],temp;
    int i,j,n;
    printf("How many students:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter name of student:");
        scanf("%s",name[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                temp=name[j];
                name[j]=name[j+1];
                name[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted names are:\n");
    for(i=0; i<n; i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
