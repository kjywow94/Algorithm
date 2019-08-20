#include <cstdio>
#include <algorithm>
using namespace std;

int num[103], n;
int tmax;
int tmin;
int p, m, x, d;

void Total(int cnt, int plus, int sub, int mult, int div, int total) {
	if (cnt == n) {
		tmax = max(tmax, total);
		tmin = min(tmin, total);
		return;
	}

	if (plus < p) {
		Total(cnt + 1, plus + 1, sub, mult, div, total + num[cnt]);
	}
	if (sub < m) {
		Total(cnt + 1, plus , sub+1, mult, div, total - num[cnt]);
	}
	if (mult < x) {
		Total(cnt + 1, plus, sub, mult+1, div, total * num[cnt]);
	}
	if (div < d) {
		Total(cnt + 1, plus, sub, mult, div + 1, total / num[cnt]);
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	scanf("%d %d %d %d", &p, &m, &x, &d);

	Total(1, 0, 0, 0, 0, num[0]);

	printf("%d\n%d\n", tmax, tmin);
	
}