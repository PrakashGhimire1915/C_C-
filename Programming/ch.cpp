#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, ch, sum=0;
	do
	{
		printf("enter the number");
		scanf("%d",&x);
		sum=sum+x;
		printf("do you want to input again?? yes=1/no=0");
		scanf("%d",&ch);
	}while(ch!=0);
	printf("sum=%d",sum);
	return 0;
}
