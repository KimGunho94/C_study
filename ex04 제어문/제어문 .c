#include<stdio.h>
/*
* printf // 기본 출력함수 (제어문자)
* \a경고음, \b백스페이스, \n 줄바꿈 \f 폼피드 \r 캐리지 리턴
*
* scanf //기본 입력 함수
*
*/


int main()
{
	int inum, inum2;
	char inum3;
	scanf_s("%d %d %c", &inum, &inum2, &inum3);
	printf("%d %d %c", inum2, inum, inum3);


	return 0;
}