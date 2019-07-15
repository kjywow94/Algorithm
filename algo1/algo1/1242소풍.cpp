// BOJ 1242 ��ǳ
#include <cstdio>
using namespace std;

// n : n���� ��ǳ�� ����
// m : ��ȣ
//  k : ������ϴ� ��ȣ
int N, M, K;

int main() {
	scanf("%d%d%d", &N, &M, &K);

	int n;

	for (n = 1; n <= N; n++) { 
		int next = M % (N - n + 1) == 0 ? N - n + 1 : M % (N - n + 1);

		if (K == next || n == N)
			break;

		else
			K = K > next ? K - next : N - n + K - next + 1;
	}

	printf("%d\n", n);
}