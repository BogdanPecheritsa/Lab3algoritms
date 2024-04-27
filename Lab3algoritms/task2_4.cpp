#include <stdio.h>
#include <stdlib.h>
#include <chrono>
long long fib(int n) {
	long long* fibo = (long long*)malloc((n + 1) * sizeof(long long));
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	long long result = fibo[n];
	free(fibo);
	return result;
}
int main() {
	int n;
	printf("Type integer n: ");
	scanf_s("%d", &n);
	if (n <= 90) {
		auto begin = std::chrono::steady_clock::now();
		printf("Fibonacci number is: %lld\n", fib(n));
		auto end = std::chrono::steady_clock::now();
		auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end -
			begin);
		printf("The time: %lld ns\n", elapsed_ns.count());
	}
	else {
		printf("n must be lower than 90\n");
	}
	return 0;
}