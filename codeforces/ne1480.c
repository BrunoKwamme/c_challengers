#include <stdio.h>
#include <stdlib.h>

int main (){
    int X, N, M;
    int M1 = 0;

    scanf("%d%d", &X, &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &M);
        M1 = M1 + X - M;
    }
    printf("%d\n", M1 + X);


    system("pause");
    return 0;
}