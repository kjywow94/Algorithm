// ÀÌÁø¼ö µ¡¼À  ¹éÁØ 1252
#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

string x, y;
int a[100], of, f;

int main() {
	cin >> x >> y;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());

	if (x.length() > y.length())
		swap(x, y);
	for (int i = 0; i < y.length(); i++) {
		if (i < x.length()) {
			int cx = x[i] - '0';
			int cy = y[i] - '0';
			if (of + cx + cy < 2) {
				a[i] = of + cx + cy;
				of = 0;
			}
			else {
				a[i] = of + cx + cy - 2;
				of = 1;
			}
		}
		else {
			int cy = y[i] - '0';
			
			if (of + cy < 2) {
				a[i] = of + cy;
				of = 0;
			}
			else {
				a[i] = of + cy - 2;
				of = 1;
			}
		}
	}
	if (of) {
		f = 1;
		printf("1");
	}
	for (int i = y.length() - 1; i >= 0; i--) {
		if (a[i])
			f = 1;
		if (!a[i] && !f)
			continue;
		printf("%d", a[i]);
	}
	if (!f)
		printf("0");
	puts("");
}