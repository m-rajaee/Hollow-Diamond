#include<stdio.h>
#pragma warning (disable : 4996)
int main() {
	int n, c;
	scanf("%d", &n);

	for (int i = 1; i <= n / 2 + 1; i++) {
		for (int space = 1; space <= n / 2 - i + 1; space++) {
			printf(" ");
		}printf("*");
		if (i > 1) {
			for (int j = 1; j <= 2 * i - 3; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	} for (int i = 1; i <= n / 2; i++) {
		for (int space = 1; space <= i; space++) {
			printf(" ");
		}printf("*");
		if (i < n / 2) {
			for (int j = 1; j <= n - 2 * i - 2; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}