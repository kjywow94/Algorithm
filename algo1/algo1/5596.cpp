// 5596
#include <cstdio>
using namespace std;

int info, ma, sc, en;
int info1, ma1, sc1, en1;
int s, t;

int main() {
		scanf("%d %d %d %d", &info, &ma, &sc, &en);
		s = info + ma + sc + en;
		scanf("%d %d %d %d", &info1, &ma1, &sc1, &en1);
		t = info1 + ma1 + sc1 + en1;

		if (s < t) {
			printf("%d", t);
		}
		else {
			printf("%d", s);
		}

}