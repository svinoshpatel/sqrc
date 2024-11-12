#include <stdio.h>
#include <cmath>

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
		printf("\nNo real roots\n");
		return 0;
	} else {
		x = -b / (2 * a);
		Eps = 0.001;
		if (std::abs(D) < Eps) {
			printf("Two equal roots:\n");
			printf("x1 = x2 = %f", x);
			return 0;
		}
		x2 = sqrt(D) / (2 * a);
		x1 = x2 + x;
		x2 = x - x2;
		printf("\nTwo different roots: ");
		printf("\nx1 = %f", x1);
		printf("\nx2 = %f", x2);
		return 0;
	}
}
