#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int a[500001];//숫자의 배열
int cnt[8002];//빈도수저장을 위한 배열

int main() {
	int N;//숫자갯수
	int sum=0;//합
	int range;//범위
	int average;//평균
	int num_mid;//중간값
	int max_ = -1;//빈도수 최대값;
	int num_many=-4001;//최빈값
	int tmp = 0;//check용
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + N);
	num_mid = a[N / 2];
	range = a[N - 1] - a[0];
	for (int i = 0; i < N; i++) {
		sum += a[i];
		if (cnt[a[i] + 4000] == 0) cnt[a[i] + 4000] = 1;
		if (a[i] == a[i + 1]) cnt[a[i]+4000]++;
	}
	for (int i = 0; i < 8002; i++) {
		if (cnt[i] > max_) {
			max_ = cnt[i];
		}
	}
	for (int i = 0; i < 8001; i++) {
		if (cnt[i]==max_) {
			num_many = i - 4000;
			tmp++;
			if (tmp == 2) break;
		}
	}

	average = floor(1.0* sum / N +0.5);
	printf("%d\n", average);
	printf("%d\n", num_mid);
	printf("%d\n", num_many);
	printf("%d", range);
}