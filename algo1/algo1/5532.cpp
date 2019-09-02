#include <cstdio>
using namespace std;

int L, A, B, C, D;
int day;

int main() {
	day = 0;

	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

	while (true) {
		A -= C;
		B -= D;
		day++;

		if (A <= 0 && B <= 0) {
			break;
		}
	}

	printf("%d\n", L - day);
	
}