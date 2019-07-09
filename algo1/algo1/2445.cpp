// 별찍기 - 8 백준 2445
#include <cstdio>
using namespace std;

int n;

int main() {
	n = 0;

	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int k = 1; k <= (n - i) * 2; k++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= 2 * n; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i < n; i++) {
		for (int j = n-i; j > 0; j--) {
			printf("*");
		}
		for (int k = 1; k <= 2 * i; k++) {
			printf(" ");
		}
		for (int m = n - i; m > 0; m--) {
			printf("*");
		}
		printf("\n");
	}
}