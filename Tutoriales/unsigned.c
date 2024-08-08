#include <stdio.h>
#include <limits.h>

int main(){
    unsigned int a = UINT_MAX;
    unsigned int b = 0;


    printf("UINT_MAX    = %u \n", a );
    printf("UINT_MIN    = %u \n", b );
    printf("UINT_MAX +1 = %u \n", a+1 );
    printf("UINT_MIN -1 = %u \n", b-1);
    printf("%u \n", (unsigned)(1UL << 32)-1);

    return 0;
}


