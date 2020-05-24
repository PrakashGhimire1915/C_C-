#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n[10],i,j,temp;
	printf("enter any ten number");
	for(i=0;i<=9;i++){
	scanf("%d", &n[i]);
	}
	for(i=0;i<=9;i++){
		for(j=i+1;j<=9;j++)
		{
		if(n[i]>n[j]){
		temp=n[j];
		n[j]=n[i];
		n[i]=temp;	
		}
		}
	}
	for(i=0;i<=9;i++){
		printf("%d\t",n[i]);
	}
	return 0;
}
