// BOJ - 13265 »öÄ¥ÇÏ±â
#include <cstdio>
#include <vector>
using namespace std;

int n, m, chk[1000];
vector<int> circle[1000];

void solve(int v, int c) {
	chk[v] = c;
	bool colorchk = true;
	for (int i = 0; i < circle[v].size(); i++) {
		if (chk[circle[v][i]] == c) {
			colorchk = false;
		}
	}
	if (!colorchk) {
		chk[v] = -1;
		return;
	}
	for (int i = 0; i < circle[v].size(); i++) {
		if (!chk[circle[v][i]]) {
			if (c == 2)
				solve(circle[v][i], 1);
			else
				solve(circle[v][i], 2);
		}
	}
}

int main(void) {
	int t;
	scanf("%d", &t);

	for(int tc= 0; tc< t; tc++) {
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++) {
			int s, e;
			scanf("%d %d", &s, &e);
			circle[s - 1].push_back(e - 1);
			circle[e - 1].push_back(s - 1);
		}
		for (int i = 0; i < n; i++) {
			if (chk[i] == 0)
				solve(i, 1);
		}

		bool possible = true;
		for (int i = 0; i < n; i++) {
			if (chk[i] == -1) {
				possible = false;
				break;
			}
		}
		printf("%s\n", possible ? "possible" : "impossible");

		for (int i = 0; i < n; i++) {
			chk[i] = 0;
			circle[i].clear();
		}
	}
	return 0;
}
