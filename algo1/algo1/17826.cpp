// 17826 - 나의 학점은?
#include <cstdio>
using namespace std;

int stu[51] = { 0, };
int me, now;

int main() {
	for (int tc = 1; tc <= 50; tc++) {
		scanf("%d", &stu[tc]);
	}

	scanf("%d", &me);

	for (int i = 1; i <= 50; i++) {
		if (stu[i] == me) {
			now = i;
			break;
		}
	}

	if (1 <= now && now <= 5) {
		printf("A+\n");
	}
	if (6 <= now && now <= 15) {
		printf("A0\n");
	}
	if (16 <= now && now <= 30) {
		printf("B+\n");
	}
	if (31 <= now && now <= 35) {
		printf("B0\n");
	}
	if (36 <= now && now <= 45) {
		printf("C+\n");
	}
	if (46<= now && now <= 48) {
		printf("C0\n");
	}
	if (49 <= now && now <= 50) {
		printf("F\n");
	}
}