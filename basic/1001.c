#include <stdio.h>

int main() {
	int n, i, count;
	
	scanf("%d", &n);
	count = 0;

	while (n != 1) {
		if (n % 2) {
			n = (3 * n + 1) / 2;
		} else {
			n /= 2;
		}
		count++;
	}

	printf("%d\n", count);
	
	return 0;
}

