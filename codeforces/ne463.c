#include<stdio.h>
#include<stdlib.h>

int main (){
    int M, A, B, C;
    scanf("%d%d%d", &M, &A, &B);
    if (A < M && B < M && M <= 110 && M >= 40){
        C = M-A-B;
        if (A > B && A > C){
            printf("%d\n", A);
        }
        if (B > A && B > C){
            printf("%d\n", B);
        }
        if (C > A && C > B){
            printf("%d\n", C);
        }
    }
    system("pause");
    return 0;
}