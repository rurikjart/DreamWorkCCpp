#include "config.h"
#include "system.h"

   
void main() {
    int A = 100;
    int *a = &A;
    double B = 2.3;
    double *b = &B;
 
    printf("%d\n", sizeof(A));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(B));
    printf("%d\n", sizeof(b));
 
    getch();
}