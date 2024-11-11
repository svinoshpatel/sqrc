#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, x, x1, x2, D, Eps;
	printf("Input a = ");
	scanf("%f", &a);
	printf("\nInput b = ");
	scanf("%f", &b);
	printf("\nInput c = ");
	scanf("%f", &c);

	D = pow(b, 2) - 4 * a * c;
	if (D < 0) {
		printf("No real roots");
	} else {
		x = -b / (2 * a);
		if (fabs(D) < Eps) {
			printf("Two equal roots:\n");
			printf("x1 = x2 = %f", x);
		}
		x2 = sqrt(D) / (2 * a);
		x1 = x2 + x;
		x2 = x - x2;
		printf("\nTwo different roots: ");
		printf("\nx1 = %f", x1);
		printf("\nx2 = %f", x2);
	}
}
