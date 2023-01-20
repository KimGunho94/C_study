#include<stdio.h>
/*
*  1.조건문( if, else if, else )
*	it		= 참일 때 실행 거짓일 때 실행이 안됨( if 조건안에 if 조건 여러번 사용가능)
*	else if  = if 조건이 거짓이고 else if 조건이 참이면 실행
*	else		= if조건과 else if 조건이 만족하지 않을때 실행
*
*  2.조건문( switch )
*	switch (조건) 문 실행 후
*
*	case :아래 조건이 참인것을 실행 한다.
*		break
*/


int main(void)
{
	//1.조건문(if, else if, else)
	int num = 3;
	if (num < 3) {
		printf("num is smaller than 3!"); // 조건이 참이면 실행
	}
	else if (num == 2) {
		printf("Hello"); // 위의 if 조건이 거짓이고 조건이 참이면 실행
	}
	else if (1 == 1) {
		printf("World\n"); // 위에 조건이 먼저 참이면 밑에 있는 조건은 실행되지 않음
	}
	else {
		printf("안녕하세요"); // 위의 조건이 모두 거짓일 때 실행
	}

	//2.조건문( switch )
	switch (5)  // switch(조건)
	{
	case 1:
		printf("Hello"); // 조건이 거짓이면 실행되지 않는다.
		break;  // 위에 조건이 참이면 실행후 브레이크
		// break문 를 사용하지 않으면 뒤에 조건이 거짓이라도 실행됨


	case 2:
		printf("World");
		break;

	default: // 위에 조건이 모두 거짓일 때 실행됨
		printf("Default");
		break;
	}

	// switch 문 예시 
	int var;
	printf("input some positive number : ");
	scanf_s(" %d", &var); // 절대값 입력

	switch (var) // 입력된 절대값과 같은 조건 탐색
	{
	case 1:
		printf("num is 1\n");
		break;

	case 2:
		printf("num is 2\n");
		break;

	case 3:
		printf("num is 3\n");
		break;

	default:
		printf("maybe bigger than 3\n");
		break;
	}
	printf("switch state end.\n"); // 조건이 끝나고 후에 실행 

	return 0;



}