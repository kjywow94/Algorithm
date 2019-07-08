// 2439 º°Âï±â - 2 
#include <cstdio>
using namespace std;

int main() {
	int n = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=  n ;  j++) {
			if (j < (n - i) + 1) {  // 1 < (5-1) + 1
				printf("%c", ' ');
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
}