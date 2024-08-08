#include <stdio.h>
#include <limits.h>

int main(){
    int a = -1;
    unsigned int b = (unsigned int) a;

    unsigned c = 4294954051;
    int d = (int) c;

    printf("-1 as unsigned = %u\nsigned = %d\nhex: %x \n\n", b, b, b );
    printf("-13245 as unsigned = %u\nsigned = %d\nhex: %x \n\n", d, d, d);

    return 0;
}


