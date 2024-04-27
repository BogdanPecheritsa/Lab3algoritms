#include <stdio.h>
#include <math.h>
long long factorial(int n) {
	long long fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}
int main() {
	for (int n = 0; n <= 50; n++) {
		printf("n = %d\n", n);
		printf("f(n) = n: %d\n", n);
		printf("f(n) = log(n): %f\n", n > 0 ? log(n) : 0);
		printf("f(n) = n*log(n): %f\n", n > 0 ? n * log(n) : 0);
		printf("f(n) = n^2: %d\n", n * n);
		printf("f(n) = 2^n: %f\n", pow(2, n));
		printf("f(n) = n!: %lld\n", factorial(n));
		printf("\n");
	}
	return 0;
}