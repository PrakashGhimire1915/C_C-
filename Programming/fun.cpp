#include <stdio.h>
#include <stdlib.h>
void add();
void sub();
void mult();
void div();
int main()
{
   add();
   sub();
   mult();
   	div();
	return 0;
}
void add()
{
	int a,b,c,ch;
	while(ch!=0){
	printf("enter any two number");
	scanf("%d%d",&a, &b);
	c=a+b;
	printf("input again yes=1/no=0");
	scanf("%d",&ch);
}
	printf("sum=%d",c);
	}
	
	void sub()
	{
	int a,b,c,ch;
	while(ch!=0){
	printf("enter any two number");
	scanf("%d%d",&a, &b);
	c=a-b;
	printf("input again yes=1/no=0");
	scanf("%d",&ch);
}
	printf("diff=%d",c);
	}

    void mult()
    {
	int a,b,c,ch;
	while(ch!=0){
	printf("enter any two number");
	scanf("%d%d",&a, &b);
	c=a*b;
	printf("input again yes=1/no=0");
	scanf("%d",&ch);
}
	printf("mult=%d",c);
	}

   void div()
   {
	int a,b,c,ch;
	while(ch!=0){
	printf("enter any two number");
	scanf("%d%d",&a, &b);
	c=a/b;
	printf("input again yes=1/no=0");
	scanf("%d",&ch);
}
	printf("div=%d",c);
	}




