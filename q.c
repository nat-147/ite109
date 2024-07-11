#include <stdio.h>

int main() {
	int n, count = 0;

	scanf("%d", &n);

	for (int a = 1; a <= 500; a++) {
		for (int b = 1; b <= a; b++) {
			if (a * a - b * b == n)
				count++;
		}
	}

	printf("%d\n", count);

	return 0;
}

