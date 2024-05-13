#include <stdio.h>
#include <stdlib.h>

int main (){
    int x, m;
    scanf("%d", &x);
    m = x;
    while(x != 0){
        scanf("%d", &x);
        if (m < x)
            m = x;
    }
    printf("%d\n", m);
    
    system("pause");
    return 0;
}