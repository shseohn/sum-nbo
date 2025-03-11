#include <stdio.h>
#include "sum_nbo.h"

int main(int argc, char *argv[]) {
    uint32_t sum = 0;

    for (int i = 1; i < argc; i++) {
        uint32_t num = process_file(argv[i], &sum);
        if (i > 1) {
            printf(" + ");
        }
        printf("%u(0x%04x)", num, num);
    }

    printf(" = %u(0x%04x)\n", sum, sum);
    return 0;
}

