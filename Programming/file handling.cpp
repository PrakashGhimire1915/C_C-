#include <stdio.h>
#include <stdlib.h>
 
struct student{
	int id;
	char name[50];
}st;
 
int insertdata();
int viewdata();
 
 int main()
 {
 	int ch;
 	printf("1.insert data\n 2.view data");
 	printf("enter your choice");
 	scanf("%d",ch);
 	if (ch==1){
 		insertdata();
	 }
	 else if(ch==2){
	 	viewdata;
	 }
	 else{
	 	("invalid data");
	 	main();
	 }
	 return 0;
}
	 
	 int insertdata(){
	 
	 
	    printf("enter id");
	 	scanf("%d",&st.id);
	 	printf("enter your name");
	 	scanf("%s",st.name);
	 	fwrite(&st,sizeof(st),1,fp);
	 	fclose(fp);
	 }
	 

 
     
     	
     	
     	
     	
	  
 
 
