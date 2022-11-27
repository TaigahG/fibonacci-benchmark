#include <stdio.h>
#include "mylib/mylib.h"
#include <time.h>

int main(void){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("The Fibbonaci(iterative) number for %d = %d\n", N, FibIterative(N));
    printf("The Fibbonaci(recursive) number for %d = %d\n", N,FibRecursion(N));

    return 0;
}