#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int n[10];

int main() {
	string a;
	cin >> a;
	int l;
	l = a.length();
	int max_ = 0;
	for (int i = 0; i<l; i++) {
		n[a[i] - '0']++;
	}
	n[6] += n[9];
	if (n[6] % 2 == 0) n[6] = n[6] / 2;
	else if (n[6] % 2 == 1) n[6] = (n[6] + 1) / 2;

	max_ = *max_element(n, n + 9);
	cout << max_;
}