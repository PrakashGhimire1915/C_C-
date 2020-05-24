#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct person{
    char name[10];
    int EID;
    }record[10];

int main()
{
    int i,j,n=4;
    for(i=0; i<n; i++)
    {
        printf("Enter the name:\n");
        scanf("%s",record[i].name);
        printf("Enter the employee id:\n");
        scanf("%d",&record[i].EID);
    }
    person temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
         if(strcmp(record[i].name,record[j+1].name)>0)
            {
                temp=record[j];
                record[j]=record[j+1];
                record[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("\n%s\t%d",record[i].name,record[i].EID);
    }
    return 0;
}
