#include<stdio.h>

int main() {
	//int num ;
	//scanf_s("%d", num);
	//switch (num) {
	//case 0:
	//	printf("숫자 0을 고르셨습니다.");
	//	break;
	//case 1:
	//	printf("숫자 1을 고르셨습니다.");
	//	break;
	//case 2:
	//	printf("숫자 2를 고르셨습니다.");
	//	break;
	//default:
	//	(printf("0,1,2 외의 숫자를 고르셨습니다.");
	//}

	int k;
	scanf_s("%d", &k);
	switch (k) {
	case 1:
	case 2:
	case 3: //이렇게 세줄로 쓰기
		printf("봄");
		break;
	case 4:
	case 5:
	case 6:
		printf("여름");
		break;
	case 7:
	case 8:
	case 9:
		printf("가을");
		break;
	default:
		printf("겨울");
	}
}