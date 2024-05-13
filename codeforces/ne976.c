#include <stdio.h>
#include <stdlib.h>

int main (){
    int A, N, X;
    scanf("%d%d", &A, &N);
    X = A/(N+2);
    printf("%d\n", X*2);
    
    system("pause");
    return 0;
}