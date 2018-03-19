#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

using namespace std;

int a[10001];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		a[b]++;
	}
	for (int i = 1; i < 10001; i++) {
		while (a[i]--) {
			printf("%d\n",i);
		}
	}
}