#include <cstdio>
#include <queue>
using namespace std;

typedef struct _data {
	int x, y, cnt;
}Map;

int map[103][103];
bool chk[103][103];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;

bool range(int a, int b) {
	if (a >= 0 && a < n && b >= 0 && b < m) {
		return true;
	}
	return false;
}

void bfs() {
	queue<Map> q;
	q.push({ 0, 0, 1 });
	chk[0][0] = true;
	while (!q.empty()) {
		Map temp;
		temp = q.front();
		q.pop();
		if (temp.x == n-1 && temp.y == m-1) {
			printf("%d\n", temp.cnt); // 도착했을시에 엔딩
			return;
		}

		for (int i = 0; i < 4; i++) {
			Map next;
			next.x = temp.x + dx[i];
			next.y = temp.y + dy[i];
			next.cnt = temp.cnt + 1;
			if (range(next.x, next.y) && map[next.x][next.y] == 1 && !chk[next.x][next.y]) {
				q.push(next);
				chk[next.x][next.y] = true;
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	bfs();
}