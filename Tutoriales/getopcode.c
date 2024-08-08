#include <stdio.h>
#define OPCODE_MASK 0x7f000000

int get_opcode(int instruction) {
    return (unsigned)(instruction & OPCODE_MASK) >> 24;
}

int main() {
    int opcode = 0b0001011;
    //Las instrucciones de ejemplo, no contienen
    //el resto de los bits. (sf, shift, Rm, Rn, Rd, imm6)
    int inst_add = 0b0001011 << 24;
    int inst_other = 0b0001010 << 24;

    if (get_opcode(inst_add) == opcode) {
        printf("ADD OPCODE\n");
    }

    if (get_opcode(inst_other) != opcode) {
        printf("Not ADD OPCODE\n");
    }
}


