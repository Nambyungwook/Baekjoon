#include <iostream>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;

int arr[10000];

int main() {
	string a;
	cin >> a;
	int n;
	n = a.length();
	for (int i = 0; i < n; i++) {
		arr[i] = a[i] - '0';
	}
	sort(arr, arr + n,greater<int>());
	
	for (int i = 0; i<n; i++) {
		cout << arr[i];
	}
}