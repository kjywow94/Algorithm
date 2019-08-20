// BOJ - 8979 ¿Ã¸²ÇÈ
#include <cstdio>
using namespace std;

int n, k, num;
int oym[1002][3] = { 0, };

int main() {
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &oym[num][j]);
		}
	}
}