#include <stdio.h>

/*
*	1. 자동 형변환(자동으로 형변환이 일어나는 것)
*	2. 명시적 형변환
*/

/*
* 오늘의 주제: 변수와 자료형
* 프로그램 작성자 : 홍길동
* 프로그램 작성일 : 2022.02.23
* printf("오늘의 주제 : 변수와 자료형\n프로그램 작성자 : 홍길동 \n프로그램 작성일 : 2022.02.23");
*/

int main()
{
	printf("%d\n", sizeof(char)); // 문자
	printf("%d\n", sizeof(int));  // 정수
	printf("%d\n", sizeof(float));// 실수

	return 0;
}