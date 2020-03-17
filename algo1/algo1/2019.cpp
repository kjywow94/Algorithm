#include <cstdio>
using namespace std;

int main() {
	int n;
	int sum = 1;

	scanf("%d", &n);

	printf("1 ");
	for (int i = 1; i <= n; i++) {
		sum = sum * 2;
		printf("%d ", sum);
	}

}