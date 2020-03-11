// 이차원 배열과 연산
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <functional>
using namespace std;

const int MAX = 100;

int r, c, k;
int A[MAX][MAX];
int time = 0;
bool flag = false;
int num;
int row = 3, col = 3;

int main(void)
{
	scanf("%d %d %d", &r, &c, &k);
	r -= 1, c -= 1;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &num);

			A[i][j] = num;
			if (i == r && j == c && num == k)
				flag = true;
		}
	}

	while (!flag)
	{
		time++;
		if (time > MAX)
		{
			printf("-1\n");
			return 0;
		}

		vector<pair<int, int>> v[MAX];
		//R
		if (row >= col)
		{
			for (int i = 0; i < row; i++)
			{
				int cnt[MAX + 1] = { 0, };
				for (int j = 0; j < col; j++)
					cnt[A[i][j]]++;

				for (int j = 1; j <= MAX; j++)
					if (cnt[j])
						v[i].push_back({ cnt[j], j });
			}

			for (int i = 0; i < row; i++)
				for (int j = 0; j < col; j++)
					A[i][j] = 0;

			for (int i = 0; i < row; i++)
				sort(v[i].begin(), v[i].end());

			for (int i = 0; i < row; i++)
			{
				int tempIdx = 0;
				for (int j = 0; j < v[i].size(); j++)
				{
					A[i][tempIdx++] = v[i][j].second;
					if (tempIdx == MAX)
						break;
					A[i][tempIdx++] = v[i][j].first;
					if (tempIdx == MAX)
						break;
				}
				col = max(col, tempIdx);
			}
		}
		//C
		else
		{
			for (int i = 0; i < col; i++)
			{
				int cnt[MAX + 1] = { 0, };
				for (int j = 0; j < row; j++)
					cnt[A[j][i]]++;

				for (int j = 1; j <= MAX; j++)
					if (cnt[j])
						v[i].push_back({ cnt[j], j });
			}

			for (int i = 0; i < row; i++)
				for (int j = 0; j < col; j++)
					A[i][j] = 0;

			for (int i = 0; i < col; i++)
				sort(v[i].begin(), v[i].end());

			for (int i = 0; i < col; i++)
			{
				int tempIdx = 0;
				for (int j = 0; j < v[i].size(); j++)
				{
					A[tempIdx++][i] = v[i][j].second;
					if (tempIdx == MAX)
						break;
					A[tempIdx++][i] = v[i][j].first;
					if (tempIdx == MAX)
						break;
				}
				row = max(row, tempIdx);
			}
		}

		if (A[r][c] == k)
		{
			flag = true;
			break;
		}
	}
	printf("%d\n", time);
}