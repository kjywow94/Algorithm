// Sort 마스터 배지훈
#include <cstdio>
#include <algorithm>
using namespace std;

int N;
int map[500003];

int main() {
	scanf("%d", &N);
	

	for (int i = 0; i < N; i++) {
		scanf("%d", &map[i]);
	}

	sort(map, map + N);

	printf("%d\n", map[N-1]);
}