// swexprt - 1936
#include <cstdio>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a == 1 && b == 2) {
		printf("B\n");
	}
	else if (a == 1 && b == 3) {
		printf("A\n");
	}
	else if (a == 2 && b == 1) {
		printf("A\n");
	}
	else if (a == 2 && b == 3) {
		printf("B\n");
	}
	else if (a == 3 && b == 1) {
		printf("B\n");
	}
	else if (a == 3 && b == 2) {
		printf("A\n");
	}
}