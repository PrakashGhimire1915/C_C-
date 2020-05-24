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
	printf("%d",add(a,b));
	printf("%d",sub(a,b));
	printf("%d",mult(a,b));
	printf("%d",division(a,b));
	return 0;
	
}
int add(int x, int y)
{
	int z;
	z=x+y;
	printf("\n");
	return z;
}
int sub(int x, int y)
{
	int z;
	z=x-y;
	printf("\n");
	return z;
}
int mult(int x, int y)
{
	int z;
	z=x*y;
	printf("\n");
	return z;
}
int division(int x, int y)
{
	int z;
	z=x/y;
	printf("\n");
	return z;
}
