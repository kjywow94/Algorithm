// 2027 홀수만 더하기

#include <cstdio>
using namespace std;

int t; 

int main() {
	scanf("%d", &t);

	int n;

	for (int tc = 0; tc < t; tc++) {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &n);
			if (n % 2 != 0) {
				sum += n;
			}
		}
		printf("#%d %d\n",tc+1,  sum);
	}
}