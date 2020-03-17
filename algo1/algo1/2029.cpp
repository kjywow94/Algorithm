// swpexrt - 2029
#include <cstdio>
using namespace std;

int main() {
	int a, b, t;

	scanf("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		scanf("%d %d", &a, &b);

		printf("#%d %d %d\n", tc, a / b, a%b);
	}
}