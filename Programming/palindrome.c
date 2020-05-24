
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,rev=0,rem,org;
	printf("enter any number");
	scanf("%d", &n);
	org=n;
	while(n!=0){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
		}
		
		if(org==rev){
		
		printf("it is a palindrome",org);
	}
		else{
		
		printf("it is not a palindrome",org);
}
	return 0;
} 
