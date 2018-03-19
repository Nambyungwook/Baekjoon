#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int a[1000001];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}