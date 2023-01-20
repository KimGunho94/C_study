#include <stdio.h>

/*
*	1. 변수 (선언, 초기화, 호출)
*	1. 문자 자료형 char (1byte)
*	2. 정수 자료형 short, int, long, long long (순차적으로 크기가 커짐)
*	3. 실수 자료형 float, double, long double
*
*	2. 상수
*	-리터럴 상수(문자 그대로의 의미가 있는 변경할 수 없는 값)
*	-심볼릭 상수(변수의 값을 변경하지 못하게 고정된 값) - const int
*	-메크로 상수(헤더밑에 선언해준다.)
*
*/
int main()
{
	int num, num2; // 변수 동시 선언
	int num3 = 10, num4 = 20; // 변수 선언과 동시에 초기화

	const int var = 10; // 값이 변하지 않게 상수(const) 선언
	// var = 20; 상수에 값을 넣으면 오류 발생
	printf("%d", var);

	return 0;



}
