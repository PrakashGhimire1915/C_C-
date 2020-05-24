#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b)
{
    return a+b;
}
int diff(int a,int b)
{
    return a-b;
}
int quot(int a,int b)
{
    return a/b;
}
int rem(int a,int b)
{
    return a%b;
}
int pro(int a,int b)
{
    return a*b;
}
int main()
{
  int ch,a,b;
  printf("*****MENU DRIVEN*****");
  printf("\n1.Sum \n2.Difference \n3.Quotient \n4.Remainder \n5.Product \n6.Exit\n");
  do{
    printf("\nEnter the choice:\n");
    scanf("%d",&ch);
    switch(ch){
            case 1:
                printf("Enter the number:\n");
                scanf("%d%d",&a,&b);
                printf("The Sum of %d and %d is:%d",a,b,sum(a,b));
                break;
            case 2:
                printf("Enter the number:\n");
                scanf("%d%d",&a,&b);
                printf("The Difference of %d and %d is:%d",a,b,diff(a,b));
                break;
            case 3:
                printf("Enter the number:\n");
                scanf("%d%d",&a,&b);
                printf("The Quotient of %d and %d is:%d",a,b,quot(a,b));
                break;
            case 4:
                printf("Enter the number:\n");
                scanf("%d%d",&a,&b);
                printf("The remainder of %d and %d is:%d",a,b,rem(a,b));
                break;
            case 5:
                printf("Enter the number:\n");
                scanf("%d%d",&a,&b);
                printf("The Product of %d and %d is:%d",a,b,pro(a,b));
                break;
            case 6:
                printf("Exit");
                break;
                }
  }while(ch<6);
    return 0;
}
