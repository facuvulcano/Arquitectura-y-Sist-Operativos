#include <stdio.h>

int main(){
    int a = 54000;          // 0000 0000 0000 0000  1101 0010 1111 0000b 
    short sb = (short)a;    //                      1101 0010 1111 0000b
    int uc = sb;            // 1111 1111 1111 1111  1101 0010 1111 0000b
  
    printf( "sb =  %d\n",sb );
    printf( "uc =  %d\n",uc );

    return 0;
}


