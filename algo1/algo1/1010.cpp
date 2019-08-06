// BOJ 1010 - 다리놓기
#include <cstdio>
using namespace std;

int  a, b, t;
int dp[31][31];

int main() {
	scanf("%d", &t);

	for (int i = 0; i < 31; i++) {
		dp[i][i] = dp[i][0] = 1;
		for (int j = 1; j <=  i - 1; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
		}
	}

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);

		printf("%d\n", dp[b][a]);
	}
}