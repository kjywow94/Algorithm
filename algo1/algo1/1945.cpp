// swexprt - 1945
#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		int a = 0;
		int b = 0;
		int  c = 0;
		int d = 0;
		int e = 0;

		int n;

		scanf("%d", &n);

		while (n % 2 == 0) {
			n /= 2;
			a++;
		}
		while (n % 3 == 0) {
			n /= 3;
			b++;
		}
		while (n % 5 == 0) {
			n /= 5;
			c++;
		}
		while (n % 7 == 0) {
			n /= 7;
			d++;
		}
		while (n % 11 == 0) {
			n /= 2;
			e++;
		}
		printf("#%d %d %d %d %d %d\n", tc, a, b, c, d, e);
	}

}