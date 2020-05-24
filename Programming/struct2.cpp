#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[25];
	int marks[25];
}st[2];

int main(){
	int i,j;
	for(i=0;i<=1;i++){
		printf("enter your name");
		scanf ("%s,st.name");
		printf("enter your five marks");
		for(j=0;j<=4;j++){
			printf("input marks %d",j+1);
			scanf("%d",&st[i].mark[j]);
		}
	} printf("\n\n");
	
	for(i=0;i<=1;i++){
		printf("information-1 %d \n",i+1);
			printf("your name is="%s,st[i].name);
				printf("your marks is= %d",st[j].marks);
	}return 0;
	
}

