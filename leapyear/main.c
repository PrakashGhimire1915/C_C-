#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%400==0)
        printf("It is leap");
    else if(year%100==0)
        printf("It is not leap year");
    else if(year%4==0)
        printf("It is leap year");
    else
        printf("It is not leap year");
    return 0;
}
