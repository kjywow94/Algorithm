// 별찍기 - 9 백준 2446
#include <cstdio>
using namespace std;

int n;

int main() {
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		for (int k = 1; k < i; k++) {
			printf(" ");
		}

		for (int j = 0; j < (2 * n+1) - (2* i); j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 2; i <= n; i++) {

		for (int j = n-i; j > 0; j--) {
			printf(" ");
		}

		for (int j = 1; j <= (2 *  i -1) ; j++) {
			printf("*");
		}

		printf("\n");
	}
}