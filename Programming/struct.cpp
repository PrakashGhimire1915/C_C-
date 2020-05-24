#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
	char name[25];
	char address[25];
	int id;
}st;

int main(){
	int i;
	for(i=0;i<=2;i++){
	
	printf("informatio-1\n",i+1);
	printf("enter your name\n");
	scanf("%s",st.name);
	printf("enter your address");
	scanf("%s",st.address);
	printf("enter your id");
	scanf("%d",&st.id);
	}
	for(i=0;i<2;i++){
	
	printf("your name is %s\n",st.name);
	printf("your address is %s\n",st.address);
	printf("your id is %d\n",st.id);
	return 0;
}
	
	
}


