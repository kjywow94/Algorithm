// 수강 과목 - 17845
#include <cstdio>
#include <algorithm>
using namespace std;

int maxs, object;
int pot[100003];
int imp[100003];
int Max;

int main() {
	scanf("%d %d", &maxs, &object);
	for (int i = 0; i < object; i++) {
		scanf("%d %d", &pot[i], &imp[i]);
	}

	for (int i = 0; i < object; i++) {
		int sum = 0;
		int time  = 0;
		time = imp[i];
		sum = pot[i];
		Max = max(sum, Max);
		for (int j = i + 1; j < object; j++) {
			time += imp[j];

			if (time <= maxs) {
				sum += pot[j];
				Max = max(sum, Max);
				time -= imp[j];
				sum -= pot[j];
			}
			time -= imp[j];
		}
	}

	printf("%d\n", Max);
}