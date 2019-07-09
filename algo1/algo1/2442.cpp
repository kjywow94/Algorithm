// º°Âï±â - 5 2442
#include <cstdio>
using namespace std;

int n;

int main() {
	n = 0;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int k = 0; k < n - i; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}