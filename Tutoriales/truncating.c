#include <stdio.h>
#include <limits.h>
#include <stdint.h>
int main(){
    
    int   sa = -4;            // 1111 1111 1111 1111  1111 1111 1111 1100b
    short sb = sa;            //                      1111 1111 1111 1100b
  
    printf( "sa =  %d\n",sa );
    printf( "sb =  %d\n",sb );



//    short d = -8;            //                     11101 1111 1111 1000b
//    unsigned short ug = d;   //                     1111 1111 1111 1000b
//    int se = d;              // 1111 1111 1111 1111 1111 1111 1111 1000b
//    unsigned int uf = ug;    // 0000 0000 0000 0000 1111 1111 1111 1000b 
//
//    printf( "se =  %d\n",se );
//    printf( "uf =  %u\n",uf );

    int32_t virtual_address;

#define VIRTUAL_MASK 0xFFFFF000
#define PAGE_OFFSET_MASK 0xFFF

    int32_t virtual_page_number= (virtual_address & VIRTUAL_MASK) >> 12;
    int32_t physical_offset = (virtual_address & PAGE_OFFSET_MASK);

    return 0;
}


