#include<stdio.h>

/*
* 배열 ( 선언, 초기화, 접근 )
* 배열 선언 = int result[값];
* 
* 문자 저장 방법
*/

int main(void)
{	// 선언과 동시에 초기화	
	int result[4] = {1,2,3,4};				// result[]; 로 대괄호 안에 얼마나 데이터를 넣을지 선언
				  //(0,1,2,3)인덱스 번호	// 중괄호 안에 데이터 초기화
	printf("%d\n", result[3]);				// 인덱스 번호로 데이터 값을 확인 가능하다
	
	// 개별 초기화 
	char result1[2];						// result[] 배열 선언후
	result1[ 0 ] = 'a';						// 인덱스 번호로 데이터 초기화
	result1[1] = 'b';

	printf("%c\n", result1[0]);	
	printf("%c\n", result1[1]);

	// 접근
	int  result2[] = { 1,2,3 };				// 선언과 동시에 초기화
	printf("%d\n", result2[0]);				// 접근

	char myArray1[5] = { 'a','b','c','d','e'}; 
	//printf("%c\n", myArray1[0]);			// 개별 출력 방법
	//printf("%c\n", myArray1[1]);
	//printf("%c\n", myArray1[2]);
	//printf("%c\n", myArray1[3]);
	for (char i = 0; i  <  5; i++) {		// for 문으로 조건 입력
	printf("%c\n", myArray1[i]);			// myArray[i]로 반목문 실행 
	}

	int myArray[5] = { 1,2,3,4,5 };

	for (int n = 0; n < 5; n++) {
		if (n == 1) {
			continue;
		}
		printf("%d\n", myArray[n]);
	}

	for (int n = 0; n < 5; n++) {
		if (n != 1) {
			printf("%d", myArray[n]);
		} else {
			printf(" ");
		}
	}
	
	// 문자 저장 방법
	char result3[] = "Hello";		    // 문자는 = ""; 로 초기화 가능(저장) //" 공백 "; 공백도  메모리를 차지한다. 
	result3[4] = '\0';			    	// 문자열 끝에 \0(null 문자)이 자동 저장되어 사이즈가 1이 늘어난다.
								    	// \0(null 문자) 문자 중간에 입력하면 문자끝이라고 인식함
	printf("\n%s\n", result3);		    // 문자열 출력 방법 %s

	char result4[] = "오늘 배운것은 배열의 선언, 초기화, 접근 방법입니다.";	// 한글은 글자당 2바이트
	result4[25] = '\0';
	printf("%s\n", result4);

	//char result5[] = "오늘 배운것은 배열의 선언, 초기화, 접근 방법입니다.";
	//for (int a = 0; a <= 52; a++) {
	//	if (a <= 24) {
	//		printf("%c", result5[a]);
	//	}
	//	else {
	//		printf(" ");
	//	}
	//}
	int result6[5];

	for (int i = 0; i < 5; i++) {
	scanf_s("\n%d", &result6[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d", result6[i]);
	}

	return 0;
}