// ����� - 6 2443
#include <cstdio>
using namespace std;

int n;

int main() {
	n = 0;
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
}