// swexprt 2025

#include <cstdio>
using namespace std;

int main() {
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("%d\n", sum);
}