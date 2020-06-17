#include <cstdio>
using namespace std;

int main() {
	int t, n;
	scanf("%d", &t);
	
	for (int tc = 1; tc <= t; tc++) {
		scanf("%d", &n);
		int sum = 1;

		for (int i = 2; i <= n; i++) {
			if (i % 2 == 0) {
				sum -= i;
			}
			else {
				sum += i;
			}
		}
		printf("#%d %d\n", tc, sum);
	}
}