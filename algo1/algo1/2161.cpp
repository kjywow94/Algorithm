#include <cstdio>
#include <queue>
using namespace std;

int n;
queue<int> q;
int temp;
int main() {
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size () != 1) {
		// ������� ������
		temp = q.front();
		q.pop();

		int next = q.front();
		q.pop();
		q.push(next);
	}
		printf("%d\n", q.front());
}