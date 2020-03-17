//swpert 2043
#include <cstdio>
using namespace std;

int main() {
	int p, k;
	int cnt = 0;
	scanf("%d %d", &p, &k);

	for (int i = k; i <= p; i++) {
		cnt++;
	}

	printf("%d\n", cnt);
}