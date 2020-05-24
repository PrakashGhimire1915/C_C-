#include <stdio.h>
#include <stdlib.h>
float avg(float age[])
{
    int i;
    float a,sum=0.0;
    for(i=0; i<6; i++)
    {
        sum=sum+age[i];
    }
    a=(sum/6);
    return a;
}
int main()
{
    float a,age[]={23.4,55,22.6,3,40.5,18};
    a=avg(age);
    printf("average age=%.2f",a);
    return 0;
}
