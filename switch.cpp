#include<stdio.h>

int main() {
	//int num ;
	//scanf_s("%d", num);
	//switch (num) {
	//case 0:
	//	printf("���� 0�� ���̽��ϴ�.");
	//	break;
	//case 1:
	//	printf("���� 1�� ���̽��ϴ�.");
	//	break;
	//case 2:
	//	printf("���� 2�� ���̽��ϴ�.");
	//	break;
	//default:
	//	(printf("0,1,2 ���� ���ڸ� ���̽��ϴ�.");
	//}

	int k;
	scanf_s("%d", &k);
	switch (k) {
	case 1:
	case 2:
	case 3: //�̷��� ���ٷ� ����
		printf("��");
		break;
	case 4:
	case 5:
	case 6:
		printf("����");
		break;
	case 7:
	case 8:
	case 9:
		printf("����");
		break;
	default:
		printf("�ܿ�");
	}
}