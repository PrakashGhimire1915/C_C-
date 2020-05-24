#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char ch[25];
	int i,j;
	printf("enter your name");
	scanf("%s",ch);
	for(i=0;i<=24;i++){
		for(j=0;j<=i;j++){
			printf("%c",ch[j]);
			
		}printf("\n");
	}
	
	
	
	
	
	return 0;
}
