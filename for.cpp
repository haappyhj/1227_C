#include<stdio.h>

int main() {

	////for(�ʱ�ȭ[����]; ����[������]; ����[���])��
	//for (int n = 0; n < 10; n++) {
	//	printf("%d.����\n",n);
	//}

	/*int n;
	scanf_s("%d", &n);
	for (int t = 0; t < n; t++) {
		printf("%d.�� 2024���̴� \n", t);
	}
	return 0;*/

	for (int i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
			printf("%d\n",i);
		}
	}
	for (int t = 1; t <= 10; t++) {
		if (t %3==0 ) {
			continue;
			printf("%d\n", t);
		}
	}
}