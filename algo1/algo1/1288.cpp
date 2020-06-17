#include <cstdio>
#include <iostream>
using namespace std;

bool isOk(bool arr[])
{
	for (int i = 0; i < 10; i++) {
		if(!arr[i]) return 0;
	}

	return 1;
}

int main() {
	int t, n;
	
	scanf("%d", &t);

	for (int tc = 1; tc <= t; tc++) {
		scanf("%d", &n);
		
		bool chk[10] = { 0, };
		int cnt = 0;
		while (1) {
			if (isOk(chk)) break;
			int tmp = n + n * cnt;
			while (tmp != 0)
			{
				chk[tmp % 10] = true;
				tmp /= 10;
			}
			cnt++;
		}
		printf("#%d %d\n", tc, cnt * n);
	}
}