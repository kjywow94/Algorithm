// Επ»η
#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int ti[1003], pi[1003];
int Max;

void end(int idx, int sum) {
	if (idx == n) {
		Max = max(Max, sum);
		return;
	}

	end(idx + 1, sum);

	if (idx + ti[idx] <= n) {
		end(idx + ti[idx], sum + pi[idx]);
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &ti[i], &pi[i]);
	}

	end(0, 0);

	printf("%d\n", Max);
}