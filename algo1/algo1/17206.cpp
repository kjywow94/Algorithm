// boj 준석이의 수학 숙제
#include <cstdio>
using namespace std;

int T;
int arr[80003] = { 0, };

int main() {
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < T; i++) {
		int sum = 0;
		for (int j = 1; j <= arr[i]; j++) {
			if (j % 3 == 0 || j % 7 == 0) {
				sum += j;
			}
			else if (j % 3 == 0 && j % 7 == 0) {
				sum += j;
			}
		}
		printf("%d\n", sum);
	}
}