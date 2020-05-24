#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("details.txt","w");
    char nam[50],add[50];
    int id;
    printf("Enter name::");
    gets(nam);
    printf("Enter address::");
    gets(add);
    printf("Enter ID of employee::");
    scanf("%d",&id);
    fprintf(fp,"%s \t%s \t%d\n",nam,add,id);
    fclose(fp);
    fp=fopen("details.txt","r");
    printf("\nName  \t\tAddress \tID\n");
    while(!feof(fp))
    {
        printf("%s \t%s \t\t%d\n",nam,add,id);
        fscanf(fp,"%s %s %d",nam,add,&id);
    }
    fclose(fp);
    return 0;
}
