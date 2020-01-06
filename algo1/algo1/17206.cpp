// boj 준석이의 수학 숙제
#include <cstdio>
using namespace std;

int map[100003] = { 0, };

int main() {
	int num = 0;

	for (int i = 0; i < 100003; i++) {
		if (i % 3 == 0 && i % 7 == 0) {
			num += i;
		}
		else {
			if (i % 3 == 0) {
				num += i;
			}
			else if (i % 7 == 0) {
				num += i;
			}
		}
		map[i] = num;
	}

	int t;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);

		printf("%d\n", map[n]);
	}

}
