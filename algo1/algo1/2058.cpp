// 자릿수 더하기 2058
#include <cstdio>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	int nan = 0;

		if (n > 1000) {
			sum += n / 1000;
		}
		nan += n % 1000;

		if (nan > 100) {
			sum += nan / 100;
		}
		nan = nan % 100;

		if (nan > 10) {
			sum += nan / 10;
		}

		nan = nan % 10;
		
		sum += nan;

		printf("%d\n", sum);
}