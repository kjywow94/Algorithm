// º°Âï±â - 7 2444
#include <cstdio>
using namespace std;

int n;

int main() {
	n = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		for (int k = n - i; k > 0; k--) {
			printf(" ");
		}

		for (int j = 0; j < 2 * (i - 1) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {

		for (int k = 0; k < i; k++) {
			printf(" ");
		}

		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}