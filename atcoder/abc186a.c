#include <stdio.h>
int main (){
	int kg, limite;
	printf("Qual é a carga limite do caminhão?: ");
	scanf ("%d", &limite);
	printf("Qual é o peso de cada tijolo?: ");
	scanf ("%d", &kg);
	printf("O caminhão consegue carregar %d desses tijolos.", limite/kg);



	return 0;
}