//swexpert - 1933
#include <cstdio>
using namespace std;

int arr[1003] = { 0, };

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			arr[i] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] == 1) {
			printf("%d ", i);
		}
	}
}