// Sort 마스터 배지훈
#include <cstdio>
#include <algorithm>
using namespace std;

int N;
int arr[500003];

int main() {
	scanf("%d", &N);
	

	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + N);

	printf("%d\n", arr[N-1]);
}