
#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"
     
clock_t start, end;
double TimeUsed;
const int N = 80;

int main(){
    start = clock();

    for(int i=1; i<=N; i++){
        FibIterative(i);
    }

    end = clock();
    TimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Runtime of Iterative Fibonnaci N %d : %lfs\n", N, TimeUsed);



    start = clock();

    for(int i=1; i<N; i++){
        FibRecursion(i);

    }
    end = clock();
    TimeUsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Runtime of Recursive Fibonnaci N %d : %lfs\n", N, TimeUsed);

    return 0;
}
