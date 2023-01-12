#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2

typedef void (*fp)(void);

void fn0(void){
    printf("fn0\n");
}

void fn1(void){
    printf("fn1\n");
}

void fn2(void){
    printf("fn2\n");
}

int main(int argc, char** argv) {
    fp fp_array[] = {fn0, fn1, fn2};
    srand(time(NULL));
    int r = rand() / (RAND_MAX / N + 1);
    printf("%d\n", r );
    switch (r) {
        case 0:
            fp_array[0]();
            break;
        case 1:
            fp_array[1]();
            break;
        case 2:
            fp_array[2]();
            break;
        default:
            printf("default %d\n", r);
    }
    return 0;
}


