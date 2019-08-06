// 2980 BOJ 도로와 신호등
#include <cstdio>
using namespace std;

int N, L, D, R, G, price, now;

int main() {
	scanf("%d %d", &N, &L);
	price = now = 0;
	for (int tc = 0; tc < N; tc++) {
		scanf("%d %d %d", &D, &R, &G);

		price += D - now;
		now = D;

		int red = price % (R + G);
		if (red <= R) {
			price += R - red;
		}
	}
	printf("%d\n", price + (L - now));
}