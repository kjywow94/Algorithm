// º°Âï±â - 3 2440
#include <cstdio>

int n;

int main() {
	n = 0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n ; j++) {
			if (j < i) {
				printf("%c", ' ');
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}