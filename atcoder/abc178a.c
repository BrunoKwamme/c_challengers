#include <stdio.h>
int main (){
	int x;
	scanf ("%d", &x);
	if (x == 1){
		x = 0;
		printf ("%d", x);
	}
	else if (x == 0){
		x = 1;
		printf("%d", x);
	}

	return 0;
}