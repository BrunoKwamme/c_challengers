#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    char linha[1123], inversao[1123];
    scanf("%d%*c", &n);
    for(int i = 0; i < n; ++i) {
        fgets(linha, 1123, stdin);
        
        int len = strlen(linha);
        
        if (linha[len-1] == '\n') {
            linha[len-1] = '\0';
            --len;
        }
        
        for(int j = 0; linha[j] != '\0'; ++j) {
            //if (('a' <= linha[j] && linha[j] <= 'z') || ('A' <= linha[j] && linha[j] <= 'Z'))
            if (isalpha(linha[j]))
                linha[j] += 3;
        }
        
        //int len = strlen(linha);
        
        for(int j = 0; j < len; ++j) 
            inversao[len-1-j] = linha[j];
            
        inversao[len] = '\0';
        
        for(int j = len/2; inversao[j] != '\0'; ++j)
            --inversao[j];
        
        //printf("A linha lida foi: %s", linha);
        printf("%s\n", inversao); // puts(inversao);
    }

    return 0;
}