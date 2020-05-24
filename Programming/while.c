#include <stdio.h>
#include <stdlib.h>

int main(){
         int n,c=0;
         printf("enter any digit");
         scanf("%d",&n);
         while(n!=0)
         {
         	c++;
         	n=n/10;
		 }
		 printf("number of digit=%d",c);
	return 0;
}
