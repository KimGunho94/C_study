#include <stdio.h>

/*
*	1. 비교 연산자 (< , > ==, 1=, <=, >=)
*	2. 증감 연산자 (++, --)
*	3. 논리 연산자 ( &&(AND), ||(OR), !(NOT) )
*	4. 삼항 조건 연산자 ( 조건이 참이면 첫번째 거짓이면 두번째 "" : "" )
*/

int main()
{
	int a = 10, b = 20;

	// 비교 연산자

	printf("a == b : %d\n", a == b); // 같다 
	printf("a > b : %d\n", a > b);	// a가 크다
	printf("a < b : %d\n", a < b);	// b가 크다 
	printf("a >= b : %d\n", a >= b);	// a가 b와 같거나 크다 
	printf("a <= b : %d\n", a <= b);	// b가 a와 같거나 크다 
	printf("a != b : %d\n", a != b);	// a와 b는 다르다 
	// 값이 참이면 1을 반환하고 거짓이면 0을 반환한다.

	// 증감 연산자
	// printf("%d\n", ++a); // 더하고 출력
	// printf("%d\n", a++); //출력하고 더하고

	printf("a : %d\n", a);
	printf("a : %d\n", a++);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", --b);
	printf("b : %d\n", b);

	// 논리 연산자
	int num1 = 20, num2 = 10;
	int result;

	result = 1 && 1;
	printf("result 1 : %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result 2 : %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("result 3 : %d\n", result);

	result = num1 > num2 || num1 == num2;
	printf("result 4 : %d\n", result);

	printf("result 5 : %d\n", !0);

	// 삼항 조건 연산자
	10 == 10 ? printf("참") : printf("거짓");
	// 앞의 조건이 참이면 첫번째 출력 거짓이면 두번째 출력

	int num, absolute;
	printf("정수 입력 :");
	scanf_s("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("절대값 %d\n", absolute);


	return 0;
}