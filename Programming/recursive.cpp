#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int main(){
	int a,b,c;
	printf("enter any two no.");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("sum=%d",c);
	return 0;
}
int add(int x,int y)
{
	if(x==0&&y==0){
		return 0;
	}else{
		return x%10+y%10+add (x/10, y/10);
	}
}
