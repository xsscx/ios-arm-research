#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>


void write_sprr(uint64_t v)
{
    __asm__ __volatile__("msr s3_4_C15_C2_7, %0\n"
                         "isb sy\n" ::"r"(v)
                         :);
}

uint64_t read_sprr(void)
{
    uint64_t v;
    __asm__ __volatile__("isb sy\n"
                         "mrs %0, s3_4_C15_C2_7\n"
                         : "=r"(v)::"memory");
    return v;
}


int main(int argc, char *argv[])
{

// {
//    for (int j = 0; j < 64; ++j) {
//        printf("Read Initial Register bit %02d: %016llx\n", j, read_sprr());
//    }
//  }


    for (int i = 0; i < 64; ++i) {
        write_sprr(1ULL<<i);
        printf("Flipped Register s3_4_C15_C2_7 bit %02d: %016llx\n", i, read_sprr());
    }
}
