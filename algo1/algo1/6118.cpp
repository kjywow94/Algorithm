// boj 6118 ¼û¹Ù²ÀÁú
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int num = 20000 + 2;

int n, m, a, b, c, arr[num];
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
			if (!arr[next]) {
				q.push(next);
				arr[next] = arr[now] + 1;
				b = max(b, arr[next]);
			}
	}

	for (int i = 2; i <= n; i++){
		if (arr[i] == b) {
			if (!a)
				a = i;
			c++;
		}
	}

	printf("%d %d %d\n", a, b, c);
}