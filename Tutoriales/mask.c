#include <stdio.h>
#include <stdint.h>
int main(){
    uint64_t a = 0b11110011110000000011001111001111;
    int MASK = 0x003FFC00;

    printf("%lu \n", (a & MASK )>> 10 );


    return 0;
}
