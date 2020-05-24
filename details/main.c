#include <stdio.h>
#include <stdlib.h>
struct student{
                char nam[50],add[50];
                int id;
                }s[50];
int main()
{
    FILE *fp;
    fp=fopen("details.txt","w");
    int i,n;
    printf("How many you want to enter:");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
    printf("\nEnter name:");
    scanf("%s",s[i].nam);
    printf("\nEnter address:");
    scanf("%s",s[i].add);
    printf("\nEnter id:");
    scanf("%d",&s[i].id);
    }
    fclose(fp);

    fp=fopen("details.txt","r");
    for(i=0; i<=n; i++)
    {
        printf("\n%s\t\t%s\t\t%d",s[i].nam,s[i].add,s[i].id);
    }
    fclose(fp);
    return 0;
}
