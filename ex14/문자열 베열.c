#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*
*	문자열 배열
*	배열 기반 문자열
*		- 문자를 배열로 저장한다.
*		- 저장된 배열 문자를 변수[인덱스번호]로 개별 변경이 가능하지만
*		  변수 = "변경"; 은 불가능 하다.
* 
*	포인터 기반 문자열 
*		-*포인터 변수로 저장된 메모리는 상수로 저장되기 때문에
*		  개별 데이터 주소를 변경할 수 없고
*		  기존 데이터 메모리주소를 버리고 새로운 
*		  메모리주소로 데이터를 변경할수 있다.
*	
*	문자 단위 입출력 함수 ( getchar(입), putchar(출) )
*	문자 단위로 입출력이 가능하다. 예) a, b, c, d
*
*	문자열 단위 입출력 함수 ( gets() , puts() )
*	문자열 단위로 입출력이 가능하다. 예) abcd , efgh
* 
*	문자열 처리 함수 ( strlen(), strcpy( , ), strncpy(), strcat() )
*	strlen() =  문자열의 길이를 null(\n) 을 제외하고 알수있다.
*	strcpy(문자열,문자열) = 오른쪽에 있는 문자열을 왼쪽 문자열로 이동시킨다.
*	strncpy(문자열, 문자열,길이) = 오른쪽에 있는 문자열의 길이만큼 왼쪽 문자열로 이동시킨다.
*	strcat(문자열, "문자") =  오른쪽의 문자를 왼쪽 문자열에 이어붙여준다.
*							  strcat(문자열,"문자", 길이) 로 문자길이만큼 이어붙여 줄 수 있다.
*	strncmp(문자열, 문자열, 번호) =  문자열의
*/
int main(void)
{
	char good[] = "Good";
	char* bad = "Bad";
	printf("%s %s\n", good, bad);
	// 배열 기반의 문자열 변수
	// good = "New Good"; 이렇게 데이터 변경이 불가능 하다
	good[0] = 'H';			 // 인덱스 번호로 저장된 데이터를 변경 가능하다

	// 포인터 기반의 문자열 변수
	// *bad = 'S'; 상수로 저장되기 때문에 개별 메모리 주소를 변경할 수 없다
	// 기존 데이터 메모리 주소를 버리고 새로운 메모리 주소로 데이터를 저장한다.
	bad = "New Bad";	

	//문자 단위 입출력
	int ch1, ch2;
	// 각 문자를 입력받는다.
	ch1 = getchar(); 
	ch2 = getchar(); 

	// 입력받은 문자 출력
	putchar(ch1); 
	putchar(ch2);

	int ch;
	while(1){						// while 문으로 무한 반복
		ch = getchar();				// 문자를 입력 받는다.
		if (ch == EOF) {			// EOF = Ctrl + Z
			break;					// EOF를 입력받으면 조건이 충족되어 반복문을 멈춘다.
		}
		putchar(ch);				// 반복문이 돌아서 입력받은 모든 문자를 출력한다.
	}
	printf("반복문이 종료되었습니다.\n");

	// 문자열 단위 입출력
	char ch3[30];					// 문자열을 변수[배열]로 선언한다.
	gets(ch3);						// 문자열을 입력받는다.
	puts(ch3);						// 입력받은 문자열을 출력한다.
	printf("이 문자열은 다음 줄에서 출력됩니다.\n");

	// 문자열 처리 함수 
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	// 문자열의 길이 출력
	// strlen(문자열 배열) 로 문자열의 길이를 출력할수있다.
	printf("str1의 길이 : %d, str2의 길이 : %d\n", strlen(str1), strlen(str2));
	// 문자열 이동 
	strcpy(str3, str1);				//	오른쪽 문자열을 왼쪽으로 이동
	printf("%s\n", str3);

	strncpy(str2, str1, 5);         // 오른쪽 문자열 ,5 길이만큼 왼쪽으로 이동 시킨다.
	printf("%s\n", str2);

	strcat(str1, "Hello");			// 오른쪽 문자를 왼쪽 문자열에 붙여준다.
	printf("%s\n", str1);

	char str4[50] = "Michael sss";
	char str5[50] = "Michael ";
	strcat(str4, "Hello",2);		// 오른쪽 문자를 왼쪽 문자열에 붙여준다.
	printf("%s\n", str4);

	printf("%d", strncmp(str4, str5, 9));

	return 0;
}
