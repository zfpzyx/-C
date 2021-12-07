#include <stdio.h>
#include <math.h>

int fun(int n) {
	if (n <= 3)
		return n;
	else
		return fun(n - 1) + fun(n - 3);
}

int main() {
	int n;
	while (scanf("%d", &n) && n)
		printf("%d\n", fun(n));
	return 0;
}