#include <stdio.h>
#include <x86intrin.h>
#define __int64 long long

int main(int argc, char* argv[]){
    unsigned __int64 i;
    unsigned int ui;
    i = __rdtscp(&ui);
    printf("%I64lld ticks\n", i);
    printf("TSC_AUX was %x\n", ui);
    return 0;
}
