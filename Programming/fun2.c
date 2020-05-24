#include <stdio.h>
#include <stdlib.h>

int add(int,int);
int sub(int,int);
int mult(int,int);
int division(int,int);
int main()
{
	int a,b;
	printf("enter any two no.");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	mult(a,b);
	division(a,b);
	return 0;
}
int add(int x,int y)
{
	int z;
	z=x+y;
	printf("sum=%d",z);
	}
	int sub(int x,int y)
{
		int z;
	z=x-y;
	printf("diff=%d",z);
	}
		int mult(int x,int y)
{
		int z;
	z=x*y;
	printf("mult=%d",z);
	}
		int division(int x,int y)
{
		int z;
	z=x/y;
	printf("divison=%d",z);
	}
	


	


