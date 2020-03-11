#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

typedef struct _data {
	int x, y;
}Data;

char map[9][9];
char nmap[9][9];
int Map[9][9];
int dx[9] = { -1 , 0, 1, -1, 0, 1, -1, 0, 1 };
int dy[9] = { 1, 1, 1, 0, 0, 0, -1, -1, -1 };
int num;

bool range(int a, int b) {
	if (a > 0 && a < 8 && b > 0 && b < 8) {
		return true;
	}
	return false;
}

void init() {
	memset(map, '.', sizeof(map));
	memset(nmap, '.', sizeof(nmap));
}

void go(int sx, int sy) {
	queue<Data> q;
	q.push({ sx, sy });

	while (!q.empty()) {
		Data temp = q.front();
		q.pop();

		if (temp.x == 0 && temp.y == 7) {
			printf("∏ÿ√Á!");
			num = 1;
			return;
		}

		for (int i = 0; i < 9; i++) {
			Data next;
			next.x = temp.x + dx[i];
			next.y = temp.y + dy[i];

			for (int a = 1; a < 7; a++) {
				for (int b = 0; b < 8; b++) {
					nmap[a][b] = map[a - 1][b];
				}
			}

			if (range(next.x, next.y) && nmap[next.x][next.y] != '#') {
				q.push(next);
			}
		}
	}
	num = 0;
	return;
}

int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%c", &map[i][j]);
		}
	}

	go(7, 0);
	
	printf("%d\n", num);

}