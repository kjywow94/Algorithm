// swexpert - 1284
#include <cstdio>
using namespace std;

int p, q, r, s, w;
int t;

int main() {
	scanf("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		int min = 987654321; // min
		int aw = 0;
		int bw = 0;
		scanf("%d %d %d %d %d", &p, &q, &r, &s, &w);
		
		aw = p * w; // a total;
		min = aw;

		if (w <= r) {
			bw = q;
		}
		else {
			bw = q + ((w-r) * s);
		}

		if (min > bw) {
			min = bw;
		}

		printf("#%d %d\n", tc, min);
	}
}