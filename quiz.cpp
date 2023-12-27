#include<stdio.h>


int main() {
	//문제1
	int x;
	scanf_s("%d", &x);
	for (int t = 1; t < 10; t++) {
		printf("%d*%d=%d\n", x,t,x*t);
	}

	//문제2 //힌트: 아스키코드
	char i;
	for (int i = 65; i <= 90; i++) {
		printf("%c\n",i);
	}

	//문제3: 정수를 입력받아 1~n까지의 누적의 합 구하기
	int sum=0;
	int n;
	scanf_s("%d", &n);
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	printf("%d\n", sum); //sum문은 바깥에다가 쓰기




}