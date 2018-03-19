#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	int N;
	
	cin >> N;
	int x[101];
	int cnt = N;
	for(int i = 0; i < N; i++) {
		cin >> x[i];
		if (x[i] == 1) cnt--;
		for (int j = 2; j < x[i]; j++) {
			if (x[i] % j == 0) {
				cnt--;
				break;
			}
		}
	}
	cout << cnt;
}