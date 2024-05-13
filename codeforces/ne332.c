#include<stdio.h>
#include<stdlib.h>

int main (){
    int N, S, x;
    scanf("%d%d", &N, &S);
    int y = S;
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        S = S + x;
        y = S < y ? S : y;
    }
    printf("%d\n", y);

    system("pause");
    return 0;
}