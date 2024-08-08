#include <stdio.h>
#include <limits.h>

int main(){
    int a = 0x7fffffff;
    int b = 0x80000000;


    printf("INT_MAX    = %d \n", a );
    printf("INT_MIN    = %d \n", b );
    printf("INT_MAX +1 = %d \n", a+1 );
    printf("INT_MIN -1 = %d \n", b-1);

    return 0;
}


