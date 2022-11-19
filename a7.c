// There are seven number stored in a array. The following prints all the numbers of that array as well as prints the numbers i backward.

#include <stdio.h>

int main()
{
    int M[10];
    int j;

    M[0] = 2;
    M[1] = 4;
    M[2] = 6;
    M[3] = 8;
    M[4] = 10;
    M[5] = 12;
    M[6] = 14;

    printf("Print all the number : \n");
    for (j = 0; j< 7;++j)
    printf("M[%d] = %d\n",j,M[j]);
    printf("From End to Beginning : \n");
    for(j= 6;j>= 0;--j);
    {
        printf("M[%d]= %d\n",j,M[j]);
    }
        // return 0;
}