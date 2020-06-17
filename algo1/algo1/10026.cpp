#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

typedef struct _data {
	int x, y, cnt
}aMap;

typedef struct _data {
	int x, y, cnt
}bMap;

char map[103][103];
bool chk[103][103];
int n;
int acnt, bcnt;

void abfs() {

}

void bbfs() {

}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!chk[i][j]) {
				abfs();
				bbfs();
			}
		}
	}

}