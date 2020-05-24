#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x[3][3],y[3][3],z[3][3],i,j;
	printf("Enter first 3*3 matrix\n");
	for(i=0;i<=2;i++){
		for (j=0;j<=2;j++){
			scanf("%d",&x[i][j]);
		}
	}
     	printf("Enter second 3*3 matrix\n");
	for(i=0;i<=2;i++){
		for (j=0;j<=2;j++){
			scanf("%d",&y[i][j]);
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			z[i][j]=x[i][j]+y[i][j];
		}
	}
	printf("summation of two 3*3 matrix\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d\t",z[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
