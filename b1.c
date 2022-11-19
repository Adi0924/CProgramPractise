#include<stdio.h>

int main()
{
int i,j,k,total;
printf("Enter the marks= ");
scanf("%d",&i);
printf("Enter the marks= ");
scanf("%d",&j);
printf("Enter the marks= ");
scanf("%d",&k);
total =(i+k+j)/3;
if((i<40)||i <33 || j <33 || k < 33)
printf("pass %f",total);
else
printf("fail %f",total);    
    return 0;
}