// boj 6118 ���ٲ���
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int num = 20000 + 2;

int n, m, a, b, c, map[num];
vector<int> map[num];

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0, u, v; i < m; i++) {
		scanf("%d %d", &u, &v);
		map[u].push_back(v);
		map[v].push_back(u);
	}

	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int next : map[now])
			if (!map[next]) {
				q.push(next);
				map[next] = map[now] + 1;
				b = max(b, map[next]);
			}
	}

	for (int i = 2; i <= n; i++){
		if (map[i] == b) {
			if (!a)
				a = i;
			c++;
		}
	}

	printf("%d %d %d\n", a, b, c);
}