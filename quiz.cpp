#include<stdio.h>


int main() {
	//����1
	int x;
	scanf_s("%d", &x);
	for (int t = 1; t < 10; t++) {
		printf("%d*%d=%d\n", x,t,x*t);
	}

	//����2 //��Ʈ: �ƽ�Ű�ڵ�
	char i;
	for (int i = 65; i <= 90; i++) {
		printf("%c\n",i);
	}

	//����3: ������ �Է¹޾� 1~n������ ������ �� ���ϱ�
	int sum=0;
	int n;
	scanf_s("%d", &n);
	for (int k = 1; k <= n; k++) {
		sum += k;
	}
	printf("%d\n", sum); //sum���� �ٱ����ٰ� ����




}