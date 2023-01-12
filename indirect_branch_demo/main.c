//inspired by https://stackoverflow.com/questions/8955209/difference-between-memory-indirect-call-and-register-indirect-call
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 2

//https://learn.microsoft.com/de-de/cpp/c-runtime-library/reference/rand?view=msvc-170
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
    //pointers to functions in array
    //name of function indicates address of function
    //void (*fp[]) (void) = {fn0, fn1, fn2};
    fp fp_array[] = {fn0, fn1, fn2};
    //Seeding value not secure: not important here.
    /* Intializes random number generator */
    srand(time(NULL));
    //https://www.geeksforgeeks.org/generating-random-number-range-c/
    int r = rand() / (RAND_MAX / N + 1);
    //https://learn.microsoft.com/de-de/cpp/c-runtime-library/rand-max?view=msvc-170
    //fp fp0 = &fn0;
   // fp fp1 = &fn1;
  //  fp fp2 = &fn2;
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


