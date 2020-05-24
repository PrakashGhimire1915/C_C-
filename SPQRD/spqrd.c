#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,s,p,q,d,rem;
printf("\nenter any two number:");
scanf("%d%d",&a,&b);
s=a+b;
p=a*b;
q=a/b;
d=a-b;
rem=a%b;
printf("\nsum,product,quotient,remainder and difference are %d %d %d %d and %d\n",s,p,q,rem,d);
getch();
}
