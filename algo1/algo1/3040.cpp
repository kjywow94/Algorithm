#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int ti[1003], pi[1003];
int Max;
void go(int idx, int sum) {
	if (idx == n) {
		Max = max(Max, sum);
		return;
	}

	go(idx + 1, sum);
	if (idx + ti[idx] <= n)
		go(idx + ti[idx], sum + pi[idx]);
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &ti[i], &pi[i]);
	}

	go(0, 0);

	printf("%d\n", Max);
}