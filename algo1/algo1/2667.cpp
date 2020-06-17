#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

typedef struct _data
{
	int x, y;
}Map;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n;
int map[27][27] = { 0, };
bool chk[27][27];
int Cnt[630];

bool range(int a, int b) {
	if (a >= 0 && a < n && b >= 0 && b < n) {
		return true;
	}
	return false;
}

int main() {
	scanf("%d", &n);

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	queue<Map> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (range(i, j) && map[i][j] == 1 && chk[i][j] == false) {
				cnt++;
				q.push({ j, i });
				while (!q.empty()) {
					Map temp = q.front();
					q.pop();
					for (int i = 0; i < 4; i++) {
						Map next;
						next.x = temp.x + dx[i];
						next.y = temp.y + dy[i];
						if (range(next.x, next.y) && map[next.y][next.x] == 1 && chk[next.y][next.x] == false) {
							q.push({ next.x, next.y });
							chk[next.y][next.x] = true;
							Cnt[cnt]++;
						}
					}
					if (Cnt[cnt] == 0) {
						Cnt[cnt]++;
					}
				}
			}
		}
	}
	printf("%d\n", cnt);
	sort(Cnt, Cnt + cnt + 1);
	for (int i = 1; i <= cnt; i++) {
		printf("%d\n", Cnt[i]);
	}
}