#include<stdio.h>

int main() { //2단부터 9단 출력하기
//	for (int i = 2; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			printf("%d*%d=%d\n", i, j,i*j);
//
//		}
//	}

//int m;
//scanf_s("%d",&m);
//for (int i = 0; i < m; i++) { // 바깥이 행, 안쪽이 열
//	for (int t=0; t < m; t++) {
//		printf("*");
//	}
//	printf("\n");
//}

int m;
scanf_s("%d", &m);
for (int i = 0; i <m; i++) { 
	for (int t=0 ; t < m; t++) { // 행과 열 사이의 관계
		if (i < t) continue;
		printf("*");
	}
	printf("\n");
}





	return 0;
}