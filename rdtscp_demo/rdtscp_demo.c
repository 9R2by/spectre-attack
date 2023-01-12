#include <stdio.h>
#include <x86intrin.h>




//inspired by https://learn.microsoft.com/de-de/cpp/intrinsics/rdtscp?view=msvc-170


//https://learn.microsoft.com/de-de/cpp/cpp/int8-int16-int32-int64?view=msvc-170
#define __int64 long long

int main(int argc, char* argv[]){
    unsigned __int64 i;
    unsigned int ui;
    /**
     * further documentation for this function:
     * Intel® 64 and IA-32 Architectures
     * Software Developer’s Manual
     *
     * Combined Volumes:
     * 1, 2A, 2B, 2C, 2D, 3A, 3B, 3C, 3D and 4
     *
     * Order Number: 325462-077US
     * April 2022
     *
     * Vol. 2B 4-557
     */
    i = __rdtscp(&ui);
    printf("%I64lld ticks\n", i);
    printf("TSC_AUX was %x\n", ui);
    return 0;
}