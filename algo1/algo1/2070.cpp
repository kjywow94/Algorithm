// 2070 Å«³ð, ÀÛÀº ³ð, °°Àº ³ð
#include <cstdio>
using namespace std;

int main() {
	int t; 
	scanf("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		int one, two;

		scanf("%d %d", &one, &two);

		if (one < two) {
			printf("#%d <\n", tc);
		}
		else if (one == two) {
			printf("#%d =\n", tc);
		}
		else {
			printf("#%d >\n", tc);
		}
	}
}