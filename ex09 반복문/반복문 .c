#include<stdio.h>

/*
* 반복문( for, while, do-while )
*	for - 가장 많이 사용하는 반복문
*
*	break 위에 조건이 충족할시 반복문 멈춤 
*	conrinue 위에 조건이 충족할시 아래 반복문 실행 멈춤
*
*/

int main(void)
{	// for문 
	// for(;;) 입력시 무한 반복 코드 실행
	// for 안에 for문 사용 가능
	for (int i = 0; i < 5; i++) {	  // i 가 5보다 작을 때 아래 코드 실행 후
		printf("안녕하세요 %d\n", i); // i 가 5와 같거나 커지면 코드 실행 x
	}
	for (int n = 1; n <= 10; n++) {	  //n 이 10이랑 같거나 작을때 밑에 코드 실행 1을계속 증가 시킴
		printf("증가 %d\n", n);			  //n 이 10보다 크면 실행 x
	}
	for (int a = 10; a >= 1; a--) {	  //a 가 1이랑  같아질 때 까지 반복으로 아래 코드 실행
		printf("감소 %d\n", a);		  // 반복 후 a가 1보다 작아지면 실행 중지
	}
	for (int b = 1; b <= 9; b++) {	  // 반복문 안에 반복문을 사용하여 코드 작성 가능
		for (int c = 1; c <= 9; c++) {
			printf("%d X %d = %d\n", b, c, b * c);
		}
	}

	// while 문 
	int var = 1;					  // 변수 선언후
	while (var <= 10) {				  // while 조건 실행
		printf("증가 %d\n", var);		  // while문 조건이 참이면 실행 후
		var++;						  // var에 +1을 추가
	}
	int var1 = 10;
	while (var1 >= 1) {				  // var1이 1과 같거나 크면 아래 코드 실행
		printf("감소 %d\n", var1);
		var1--;						  // 코드 실행 후 var1에 -1
	}

	// do-while 문 = 조건이 실행되기 전 한번은 무조건 실행 
	int var2 = 0;
	do {
		printf("안녕하세요 %d\n", var2);
		var2++;
	} while (var2 < 2);

	// 증가 
	int var3 = 1;
	do {
		printf("증가 %d\n", var3);
		var3++;

	} while (var3 <= 10);

	// 감소
	int var4 = 10;
	do {
		printf("감소 %d\n", var4);
		var4--;
	} while (var4 >= 1);



	// break 문 
	int num;						// 변수 선언
	while (1) {						// while 문 실행으로 계속 실행
		printf("1입력시 종료 : ");
		scanf_s("%d", &num);		// scanf_s로 값을 입력 받음
		if (num == 1) { 			// if 문으로 입력한 값이 1 일때 break 문 실행
			break;
		}
	} printf("종료되었습니다.\n");



	// continue 
	int num1;
	while (1) {
		printf("2를 입력해보세요 : \n");
		scanf_s("%d", &num1);
		if (num1 == 2) {
			continue;				// continue 입력시 조건에 충족하면 
									// 아래 코드를 실행 하지 않고 
									// 위에 코드로 돌아가서 실행 한다.
		}
		printf("%d\n", num1);
	}


	return 0;
}