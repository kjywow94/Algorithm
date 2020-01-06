#include <cstdio>
#include <vector>
using namespace std;

int n, m, l;
int map[1003];
vector<int> v;
int mcnt = 0;
int cnt = 0;
int main() {
	scanf("%d %d %d", &n, &m, &l);

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	int first = 0;

	while (true) {
		if (mcnt == 0) {
			break;
		}
		
		first = v.front();
		if (first % 2 == 0) {

		}
	}
}