#include <stdio.h>
#include <stdlib.h>

int fib(int);
int main(){
	int n,i;
	printf("enter your range");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	printf("%d\t",fib(i));
	}
	
	return 0;
}
int fib(int f){
	if(f==0||f==1){
		return 1;
	}
	else{
		return fib(f-1)+fib(f-2);
	}
}
