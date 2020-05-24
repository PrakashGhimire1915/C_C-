#include <stdio.h>
#include <stdlib.h>

int fact(int);
int main(){
	int n;
	printf("enter any no");
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int fact(int f){
	if(f==0 || f==1){
		return 1;
	}else{
		return f*fact(f-1);
	}
}
