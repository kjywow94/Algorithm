#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int a, b, n, user, sum;

int main() {
	srand((unsigned int)time(0));
	while (true) {
		sum = 0;
		printf("계속하시려면 1 그만사히려면 0\n");
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		sum = a + b;

		printf("숫자를 맞쳐보세요 : ");
		scanf("%d", &user);

		if (sum == user) {
			printf("맞췄습니다!!\n");
		}
		else {
			printf("틀렸습니다!! %d\n", sum);
		}
	}
}