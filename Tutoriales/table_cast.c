#include <stdio.h>
#include <limits.h>

int main(){
    int a = -1;
    unsigned int b = (unsigned int) a;

    unsigned c = 4294954051;
    int d = (int) c;

    printf( "0 == 0U                        ==> %d\n", 0 == 0U);
    printf( "-1 < 0                         ==> %d\n", -1 < 0);
    printf( "-1 < 0U                        ==> %d\n", -1 < 0U);
    printf( "2147483647  > -2147483647 - 1  ==> %d\n", 2147483647 > -2147483647 - 1);
    printf( "2147483647U > -2147483647 - 1  ==> %d\n", 2147483647U > -2147483647 - 1);
    printf( "2147483647  > (int)2147483648U ==> %d\n", 2147483647 > (int)2147483648U);
    printf( "-3 > -4                        ==> %d\n", -3 > -4);
    printf( "(unsigned)-3 > -4              ==> %d\n", (unsigned)-3 > -4);

    return 0;
}


