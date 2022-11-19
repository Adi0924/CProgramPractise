#include <stdio.h>
#define PI 3.14

int main()
{
    int a = 5;
    const float b = 7.3444;
    // PI = 7.33; //cannot do this since PI is a constant
    // printf("%f", PI);
    printf("tab character \t\t my backslash \a %f",PI);
    // b = 7.22; //cannot do this since b is a constant
    //printf("The value of a is %d and The value of b is %f\n",a,b);
    // printf("%3.4f\n",b);
    return 0;
}