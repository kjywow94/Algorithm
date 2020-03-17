#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main() {
	char write[202];

	cin >> write;

	int num = strlen(write);

	for (int i = 0; i < num; i++) {
		printf("%d ", write[i]- 64);
	}
}