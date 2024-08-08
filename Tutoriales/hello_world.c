#include <stdio.h>

// Función para imprimir un byte en binario
void print_binary(unsigned char byte) {
    for (int i = 7; i >= 0; i--) {
        printf("%c", (byte & (1 << i)) ? '1' : '0');
    }
}

int main() {
    char* hello = "Hello World";
    printf("%s\n", hello);
    char* tmp = hello;
   
    printf("\nDecimal\n");
    while (1) {
        printf("%02d ", *tmp);
        if (*tmp++ == '\0')
            break;
    }
    printf("\n");
    
    tmp = hello;
    printf("\nHexadecimal \n");
    while (1) {
        printf("%02x ", *tmp);
        if (*tmp++ == '\0')
            break;
    }
    printf("\n");
    
    tmp = hello;
    printf("\nBinario \n");
    while (1) {
        print_binary(*tmp);
        printf(" ");
        if (*tmp++ == '\0')
            break;
    }
    
    printf("\n");
    return 0;
}
