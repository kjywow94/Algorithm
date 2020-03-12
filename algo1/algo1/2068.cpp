// 2068 최대수 구하기
#include <cstdio>
using namespace std;

int main() {
	int t; 
	scanf("%d", &t);

	int n;
	
	for (int tc = 1; tc <= t; tc++) {
		int max = -987654321;

		for (int i = 0; i < 10; i++) {
			scanf("%d", &n);
			if (max < n) {
				max = n;
			}
		}

		printf("#%d %d\n", tc, max);
	}
}