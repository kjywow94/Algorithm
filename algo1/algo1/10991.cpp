//  Boj 10991 �����-16
#include <cstdio>

int n;

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" "); //  n - i��ŭ ����
		}
		for (int k = 1; k <= i * 2; k++) {
			if (k % 2 == 0) {
				printf(" "); // ¦���϶� ����
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
} 