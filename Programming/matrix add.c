#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x[2][2],y[2][2],z[2][2],i,j;
	printf("Enter first 2*2 matrix\n");
	for(i=0;i<=1;i++){
		for (j=0;j<=1;j++){
			scanf("%d",&x[i][j]);
		}
	}
     	printf("Enter second 2*2 matrix\n");
	for(i=0;i<=1;i++){
		for (j=0;j<=1;j++){
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("summation of two 2*2 matrix\n");
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("%d\t",z[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
