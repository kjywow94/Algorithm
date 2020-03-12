// 5597
#include <cstdio>
using namespace std;

int stu[31] = { 0, };

int main() {
	int n;

	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		stu[n] = 1;
	}

	for (int i = 1; i < 31; i++) {
		if (stu[i] == 0) {
			printf("%d\n", i);
		}
	}
}