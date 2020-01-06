// N°ú M
#include <cstdio>
#include <vector>
using namespace std;

int N, M;
int map[10];
bool chk[10] = { false, };

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			printf("%d", map[i]);
			if (i == N - 1) {

			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (chk[i] == false) {
				chk[i] = true;
				map[cnt] = i;
				dfs(cnt + 1);
				chk[i] = false;
			}
		}
	}
}

int main() {
	scanf("%d %d", &N, &M);

	dfs(0);
}