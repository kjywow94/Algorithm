// 미세먼지 안녕!
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 50;

typedef struct _data
{
	int y, x;
}Dir; 

Dir moveDir[4] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} }; //N S E W

int R, C, T;
int map[MAX][MAX];
int ccw[4] = { 2, 0, 3, 1 };
int cw[4] = { 2, 1, 3, 0 };

int main(void)
{
	scanf("%d %d %d", &R, &C, &T);

	int airY = -1, airX = -1, airY2 = -1, airX2 = -1;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
		{
			scanf("%d", &map[i][j]);
			if (map[i][j] == -1)
			{
				if (airY == -1)
					airY = i, airX = j;
				else
					airY2 = i, airX2 = j;
			}
		}

	for (int t = 0; t < T; t++)
	{
		queue<pair<int, int>> q;
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
				if (map[i][j] >= 1)
					q.push({ i, j });

		// 맵복사
		int copyMap[MAX][MAX] = { 0, };
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
				copyMap[i][j] = map[i][j];

		//미세먼지 확산
		while (!q.empty())
		{
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			int temp = copyMap[y][x] / 5;
			for (int i = 0; i < 4; i++)
			{
				int ny = y + moveDir[i].y;
				int nx = x + moveDir[i].x;

				//동시 다발적으로 업데이트
				if (0 <= ny && ny < R && 0 <= nx && nx < C)
					if (copyMap[ny][nx] >= 0)
					{
						map[ny][nx] += temp;
						map[y][x] -= temp;
					}
			}
		}

		//미세먼지가 확산된 배열을 복사하고
		for (int i = 0; i < R; i++)
			for (int j = 0; j < C; j++)
				copyMap[i][j] = map[i][j];


		int y = airY;
		int x = airX + 1;
		map[y][x] = 0;
		//  위쪽
		//반시계 
		for (int i = 0; i < 4; i++)
		{
			while (1)
			{
				int ny = y + moveDir[ccw[i]].y;
				int nx = x + moveDir[ccw[i]].x;

				if (ny == airY && nx == airX)
					break;
				if (!(0 <= ny && ny < R && 0 <= nx && nx < C))
					break;

				map[ny][nx] = copyMap[y][x];
				y = ny;
				x = nx;
			}
		}
		//아래쪽
		//시계 공기청정
		y = airY2;
		x = airX2 + 1;
		map[y][x] = 0;
		for (int i = 0; i < 4; i++)
		{
			while (1)
			{
				int ny = y + moveDir[cw[i]].y;
				int nx = x + moveDir[cw[i]].x;

				if (ny == airY2 && nx == airX2)
					break;
				if (!(0 <= ny && ny < R && 0 <= nx && nx < C))
					break;

				map[ny][nx] = copyMap[y][x];
				y = ny;
				x = nx;
			}
		}
	}

	int result = 0;
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (map[i][j] >= 1)
				result += map[i][j];

	printf("%d\n", result);
}