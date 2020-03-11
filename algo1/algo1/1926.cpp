// 369∞‘¿”
#include <cstdio>
#define rep(i,a,b) for(int i = a; i < b; i++)
using namespace std;

void print_num(int a) {
	int a_cp = a;
	int cnt = 0;
	while (a) {
		if (a % 10 == 3 || a % 10 == 6 || a % 10 == 9) cnt++;
		a /= 10;
	}
	if (!cnt) {
		printf("%d ", a_cp);
		return;
	}
	while (cnt--)
		printf("-");
	printf(" ");
}

int main() {
	int N;
	scanf("%d", &N);
	rep(i, 1, N + 1)
		print_num(i);
}