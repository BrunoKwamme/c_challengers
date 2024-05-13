#include<stdio.h>
#include<stdlib.h>

int main (){
    int T, N ,M, P;
    int T1 = 0;
    int T2 = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf ("%d", &T);
        if (T == 1)
            T1 = T1 + 1;
        if (T == 2)
            T2 = T2 + 1;
    }
    scanf ("%d", &P);
    scanf ("%d", &M);
    if (T1 == P && T2 == M)
        printf("S\n");
    else 
        printf("N\n");
    
    system("pause");
    return 0;
}