#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

string a[20001];

bool comp(const string &a, const string &b) {
	if (a.length() < b.length()) return true;
	else if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] < b[i]) return true;
			if (a[i] > b[i]) return false;
		}
	}
	return false;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N, comp);

	for (int i = 0; i < N; i++) {
		if(a[i]!=a[i+1]) cout << a[i] << endl;
	}
}