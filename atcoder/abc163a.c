#include <stdio.h>
#include <math.h>
int main (){
	double area, c;
	int r;
	scanf ("%d", &r);
	area = M_PI * pow(r, 2);
	c = 2 * M_PI * r;
	printf("%lf", c);

	return 0;
}