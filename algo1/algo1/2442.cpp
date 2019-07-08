// º°Âï±â - 5 2442
#include <cstdio>
using namespace std;

int n;

int main() {
	n = 0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2*n-1; j++) {
			if (j < n) {
				printf("%c", ' ');
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}