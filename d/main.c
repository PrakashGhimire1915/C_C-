#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("record.txt","w");
    char nam[20],add[20];
    printf("NAME::");
    gets(nam);
    printf("ADDRESS::");
    gets(add);
    fprintf(fp,"%s",nam);
    fprintf(fp,"%s",add);
    fclose(fp);

    fp=fopen("record.txt","r");
    printf("\nName\t\tAddress");
    while(!feof(fp))
    {
        printf("\n%s\t\t%s",nam,add);
        fscanf(fp,"%s",nam);
        fscanf(fp,"%s",add);
    }
    fclose(fp);
    return 0;
}
