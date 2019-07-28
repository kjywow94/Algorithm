// boj 1947  선물전달
#include <cstdio>
using namespace std;

long long  homan = 1000000000;

long long dp[1000003];

int main() {
	int n;
	scanf("%d", &n);

	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		dp[i] = (i - 1)*(dp[i - 1] + dp[i - 2]) % homan;
	}

	printf("%d\n", dp[n]);
}