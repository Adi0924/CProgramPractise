#include<stdio.h>

int main(){
    int principle = 200 , rate = 4 , year =1;
    int simpleInterest = (principle * rate * year)/100;
    printf("The value of simple Interest is %d", simpleInterest);
    return 0;
}