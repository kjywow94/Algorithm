#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int a, b, n, user, sum;

int main() {
	srand((unsigned int)time(0));
	while (true) {
		sum = 0;
		printf("����Ͻ÷��� 1 �׸��������� 0\n");
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		sum = a + b;

		printf("���ڸ� ���ĺ����� : ");
		scanf("%d", &user);

		if (sum == user) {
			printf("������ϴ�!!\n");
		}
		else {
			printf("Ʋ�Ƚ��ϴ�!! %d\n", sum);
		}
	}
}