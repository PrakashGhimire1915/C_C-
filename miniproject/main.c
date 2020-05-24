#include <stdio.h>
#include <stdlib.h>
struct student{
                char nam[40],add[40];
                }s;
void record(struct student s)
{
    FILE *fp;
    fp=fopen("record.txt","a");
    printf("Enter name:");
    scanf("%s",s.nam);
    printf("Enter address:");
    scanf("%s",s.add);
    fprintf(fp,"\n%s",s.nam);
    fprintf(fp,"\t\t%s",s.add);
    fclose(fp);
}
void display(struct student s)
{
    FILE *fp;
    fp=fopen("record.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"\n%s",s.nam);
        fscanf(fp,"\t\t%s",s.add);
        printf("\n%s",s.nam);
        printf("\t%s",s.add);
    }
    fclose(fp);
}

int main()
{
    int ch;
    system("cls");
    do{
        printf("\n****MENU DRIVEN****\n");
        printf("\n1.Record \n2.Display \n3.Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            record(s);
            break;
        case 2:
            display(s);
            break;

        }
      }while(ch<3);
 return 0;
}
