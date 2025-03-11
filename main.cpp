#include "sum_nbo.h"
#include <stdio.h>
#include <arpa/inet.h>

uint32_t process_file(const char *filename, uint32_t *sum) {
    FILE *file = fopen(filename, "rb");

    uint32_t num = 0;
    fread(&num, sizeof(uint32_t), 1, file);
    fclose(file);

    num = ntohl(num);
    *sum += num;

    return num;
}
