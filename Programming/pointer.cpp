#include<stdio.h>
#include<stdlib.h>
int swap(int *,int *);

int main()
{ 
   int a,b;
   printf("enter any two no.");
   scanf("%d%d",&a,&b);
  printf("before swapping value of a=%d and b=%d",a,b);
   swap(&a,&b);
     printf("after swapping value of a=%d and b=%d",a,b);
     return 0;
}

int swap(int *a,int*b){


int temp;
temp =*a;
*a = *b;
*b =temp;
}
