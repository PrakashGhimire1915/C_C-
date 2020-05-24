#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct student{
char name[50];
char address[50];
int id;
}st;
FILE *fp,*fp1;
void insertData();
void viewData();
void searchData();
void deleteData(int);
int main()
{

    int ch;
    int id;
    system("cls");
    printf("1.INSERT DATA\n2.VIEW DATA\n3.SEARCH DATA\n4.DELETE DATA\n5.EXIT\nEnter your choice=");
    scanf("%d",&ch);
    switch(ch){
case 1:
    insertData();
    break;
case 2:
    viewData();
    break;
case 3:
    searchData();
    break;
case 4:
    printf("Enter your ID which you want to delete");
    scanf("%d",&id);
    deleteData(id);
case 5:
    exit(0);
    break;
default:
    printf("INVALID INPUT!!!");
    getch();
    main();
    }
    return 0;
}

void insertData()
{
    system("cls");
    fp=fopen("myFile.txt","a");
    char ans[5]="y";
    while(strcmpi(ans,"y")==0)
	{
	    printf("Enter your ID=");
    	scanf("%d",&st.id);
    	printf("Enter your name=");
    	scanf("%s",st.name);
    	printf("Enter your address=");
    	scanf("%s",st.address);
    	fwrite(&st,sizeof(st),1,fp);
    	printf("\nDo you want to input again??Y/N=");
    	scanf("%s",ans);
    }
    fclose(fp);
    getch();
    main();
}

void viewData(){
    system("cls");
    fp=fopen("myFile.txt","r");
    if(fp==NULL)
	{
        printf("No data found");

    }
	else
	{
        rewind(fp);
        printf("ID\t\tNAME\t\tADDRESS\n");
        while(fread(&st,sizeof(st),1,fp)==1)
		{
            printf("%d\t\t",st.id);
            printf("%s",st.name);
            printf("\t\t%s\n",st.address);

        }

    }
    fclose(fp);
    getch();
    main();

}


void searchData(){

    system("cls");
    fp=fopen("myFile.txt","r");
    char name[25];
    char address[25];
    int ch;

    if(fp==NULL){
        printf("No Search Record Found!!");
        getch();
        main();
    }
    printf("1.Search By Name\n2.Search By Address\n3.Exit Search\nEnter your choice=");
    scanf("%d",&ch);

    switch(ch){
    case 1:
        printf("Enter any Name=");
        scanf("%s",name);
        printf("ID\t\tName\t\tAddress\n");
        while(fread(&st,sizeof(st),1,fp)==1){

            if(strcmpi(name,st.name)==0){
                printf("%d\t\t%s\t\t%s\n",st.id,st.name,st.address);

            }
            printf("\n");
        }
        getch();
        searchData();

        break;
    case 2:

        printf("Enter any Address=");
        scanf("%s",address);
        printf("ID\t\tName\t\tAddress\n");
        while(fread(&st,sizeof(st),1,fp)==1){

            if(strcmpi(address,st.address)==0){
                printf("%d\t\t%s\t\t%s\n",st.id,st.name,st.address);

            }
        }
        getch();
        searchData();
        break;
    case 3:
        main();
        break;
    default:
        printf("INVALIDE INPUT");
        getch();
        searchData();

    }


}

 void deleteData(int id)
 {
     system("cls");
     fp=fopen("myFile.txt","r");
     fp1=fopen("new.txt","w");
     if(fp==NULL || fp1==NULL)
     {
	 printf("\nFile Operation Failed");
     }
     else
     {
	 while(fread(&st,sizeof(st),1,fp)==1)
	   {
	       if(id==st.id)
	       {
		continue;
	       }
	       else
	       {
		  fwrite(&st,sizeof(st),1,fp1);
	       }
	   }
	 fclose(fp);
	 fclose(fp1);
	 remove("myFile.txt");
	 rename("new.txt","myFile.txt");
	 printf("\n\nThe record has been successfully deleted from the file");
     }
 getch();
 main();
 }
