// 2063 �߰��� ã��
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

		int arr[200] = { 0, };
		int n;
		scanf("%d", &n);
		int num;
		for (int i = 0; i < n; i++) {
			scanf("%d", &num);
			arr[i] = num;
		}

		sort(arr, arr + n);

		int avg = 0;

		avg = n / 2 + 0.5;

		printf("%d\n", arr[avg]);
	
}