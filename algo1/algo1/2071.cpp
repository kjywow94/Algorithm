// 평균값 구하기
#include <cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	int n;
	double sum;

	for (int tc = 1; tc <= t; tc++) {
		sum = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &n);
			sum += n;
			sum += 0.5;
		}

		printf("#%d %d\n", tc, (int)sum / 10);
	}
}