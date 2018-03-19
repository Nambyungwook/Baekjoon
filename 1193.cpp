#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;

	int max;
	int min;
	int i;
	int a, b;//분모, 분자
	for (i = 1;; i++) {
		max = i*(i + 1) / 2;
		min = i*(i + 1) / 2 - i;
		if ((min < x) && (max >= x)) break;
	}

	if (i % 2 == 0) {
		a = i;
		b = 1;
		while (1) {
			if (max == x) {
				cout << a << "/" << b;
				break;
			}
			else {
				max--;
				a--;
				b++;
			}
		}
	}
	else {
		a = 1;
		b = i;
		while (1) {
			if (max == x) {
				cout << a << "/" << b;
				break;
			}
			else {
				max--;
				a++;
				b--;
			}
		}
	}
}