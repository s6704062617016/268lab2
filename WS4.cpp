#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    
    printf("4.1: a = 1, b = 1, c = 5, d = 1");
	a = 1; b = 1; c = 5; d = 1;	
    printf("A = %.2f\n", (3*a/5.0 + 1.0/b));
    printf("B = %.2f\n", ((3*a)+(5*b))/(2 + c));
    printf("C = %.2f\n", (2.0/7.0)*(pow(4,3+c)-5*d));
    printf("D = %.2f\n", sqrt((2 + (8*b))/a));
    printf("E = %.2f\n\n", cbrt((b*b)-(4*d)));

	printf("4.2: a = 9, b = 2, c = 0, d = 1");
	a = 9; b = 2; c = 0; d = 1;
	printf("A = %.2f\n", (3*a/5.0 + 1.0/b));
    printf("B = %.2f\n", ((3*a)+(5*b))/(2 + c));
    printf("C = %.2f\n", (2.0/7.0)*(pow(4,3+c)-5*d));
    printf("D = %.2f\n", sqrt((2 + (8*b))/a));
    printf("E = %.2f\n\n", cbrt((b*b)-(4*d)));
    
    printf("4.3: a = 0, b = 3, c = 3, d = 3");
    a = 0; b = 3; c = 3; d = 3;
    printf("A = %.2f\n", (3*a/5.0 + 1.0/b));
    printf("B = %.2f\n", ((3*a)+(5*b))/(2 + c));
    printf("C = %.2f\n", (2.0/7.0)*(pow(4,3+c)-5*d));
    printf("D = %.f\n", sqrt((2 + (8*b))/a));
    printf("E = %.2f\n\n", cbrt((b*b)-(4*d)));
    return 0;
}
