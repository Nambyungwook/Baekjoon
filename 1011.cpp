#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int T;
	cin >> T;
	int ans = 0;
	for (int j = 0; j < T; j++) {
		int x, y;
		scanf("%d %d", &x, &y);
		int d;
		d = y - x;
		int i = sqrt(d);
		if (d == 1) {
			ans = 1;
		}
		else if ((i*i < d) && ((i*(i + 1)) >= d)) {
			ans = i * 2;
		}
		else if (((i*(i + 1)) < d) && (((i + 1)*(i + 1)) >= d)) {
			ans = i * 2 + 1;
		}
		printf("%d\n", ans);
	}	
}