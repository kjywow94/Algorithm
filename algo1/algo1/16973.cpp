#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

typedef struct _data {
	int x,  y, cnt;
}Data;



int n, m, h, w, Sr, Sc, Fr, Fc;
int map[1003][1003];
bool chk[1003][1003];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };

bool range(int x, int y, int dir) {
	if (dir == 0)
	{
		int ny = y + w - 1;
		if (ny >= m)
			return false;

		for (int i = x; i < x + h; i++) {
			if (map[i][ny] == 1)
				return false;
		}
	}
	else if (dir == 1) {
		for (int i = x; i < x + h; i++) {
			if (map[i][y] == 1)
				return false;
		}
	}
	else if (dir == 2) {
		int nx = x + h - 1;
		if (nx >= n)
			return false;

		for (int i = y; i < y + w; i++) {
			if (map[nx][i] == 1)
				return false;
		}
	}
	else if (dir == 3) {
		for (int i = y; i < y + w; i++) {
			if (map[x][i] == 1)
				return false;
		}
	}

	return true;
}

void exit(int sx,int sy) {
	queue<Data> q;
	q.push({ sx, sy, 0 });
	chk[sx][sy] = true;

	while (!q.empty()) {
		Data temp = q.front();
		q.pop();

		if (temp.x == Fr && temp.y == Fc) {
			printf("%d\n", temp.cnt);
			return;
		}

		for (int i = 0; i < 4; i++) {
			Data next;
			next.x = temp.x + dx[i];
			next.y = temp.y + dy[i];
			
			if (next.x >= 0 && next.y >= 0 && next.x < n && next.y < m)
			{
				if (chk[next.x][next.y] == false) 
				{
					if (range(next.x, next.y, i) == true) 
					{
						chk[next.x][next.y] = true;
						q.push({ next.x, next.y, next.cnt + 1 });
					}
				}
			}
		}
	}
	printf("-1\n");
}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	scanf("%d %d %d %d %d %d", &h, &w, &Sr, &Sc, &Fr, &Fc);
	Sr--;
	Sc--;
	Fr--;
	Fc--;
	exit(Sr, Sc);


}