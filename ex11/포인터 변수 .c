#include<stdio.h>

/* 
*	포인터 = 메모리 주소값 
*	 - 메모리 한칸당 1byte를 차지한다.
*	 - 메모리의 각 방에는 주소값이 있고 변수 선언시 메모리 주소값을 할당받는다.
*	 - 메모리의 주소값은 16진수로 표현된다.
*	
*	포인터 변수 개념) 메모리의 주소값을 변수로 초기화 시킨다 예) (int* parr = &num;)
*					  메모리에는 각 방들이 있으며 변수를 선언하면
*					  메모리를 할당받고 메모리 주소값에 저장되며
*					  메모리의 주소값을 저장하여 불러올수 있다.
*					  메모리의 주소값은 계속 바뀐다.
* 
*	배열 주소값 
*	= 배열은 배열 인덱스번호 0번( 배열 첫번째 )
*	  메모리 주소값을 기준으로 차례대로 메모리 주소값을 할당 받는다.
*	
*/
int main(void)
{	// 포인터 변수 선언
	int num = 10;					// 변수를 선언하면 메모리를 할당받고 저장한다.
	// 포인터 변수 선언 = 초기화	
	int* pnum = &num;				// 포인터변수 사용시 변수 앞에 * 붙여주고 & 변수명으로 초기화 해준다.
	printf("%p\n", &num);			// 메모리의 주소값을 불러오는 방법
	printf("%p\n", pnum);			// num과 같은 주소값을 불러온다.
	printf("%d\n", *pnum);			// 포인터변수로 주소값안에 데이터를 불러오는 방법
	
	// 포인터 변수 예)
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	// *(변수)로 &(변수) 주소값을 초기화 해준다.
	char* cptr = &cnum;				
	int* iptr = &inum;				
	double* dptr = &dnum;			

	// 주소값 출력
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// 주소값안에 데이터 호출
	printf("%d\n", *cptr);
	printf("%d\n", *iptr);
	printf("%g\n", *dptr);			// 실수형 데이터 출력시 %g로 출력

	// 주소 값으로 데이터 변경
	int inum1 = 999;
	int* pinum = &inum1;
	*pinum = 10;					
	// inum1의 데이터를 *pinum 주소 값 안에 데이터를 변경한다.
	printf("%d\n", inum1);

	// 배열 데이터 
	// 첫번째 데이터를 기준으로 순차적으로 데이터 주소값 저장 
	int myArray[3] = { 1,2,3 };
	printf("%p\n", myArray);			// 첫번째 주소값을 가르킨다.
	printf("%p\n", &myArray[0]);
	printf("%p\n", &myArray[1]);
	printf("%p\n", &myArray[2]);

	for (int i = 0; i < 4; i++) {
		printf("%p\n", &myArray[i]);    // for문을 돌려 주소값을 출력할수 있다.
	}

	short sarr[3] = { 1,2,3 };
	int iarr[3] = { 10,20,30 };

	// 인덱스 번호를 통한 접근
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
	
	// 포인터 연산을 통한 접근
	// short = 2byte /*(short + 1) = +2byte만큼 이동 후 주소값에 저장된 데이터 호출
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2)); 

	// int =  4byte  /*(int + 1)   = +4byte만큼 이동 후 주소값에 저장된 데이터 호출
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2)); 

	// 주소 확인
	printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	printf("%p %p %p\n", &iarr[1], &iarr[1], &iarr[2]);

	for (int i = 0; i <= 2; i++) {
		printf("%d\n", sarr[i]);
		printf("%d\n", *(sarr + i));
		printf("%p\n", &sarr[i]);

		printf("%d\n", iarr[i]);
		printf("%d\n", *(iarr + i));
		printf("%p\n", &iarr[i]);
	}
	 
	// 포인터 배열 방법
	int n1 = 3, n2 = 6, n3 = 9;			// 변수 선언
	// 포인트 변수로 초기화
	int* ptr1 = &n1;				
	int* ptr2 = &n2;					
	int* ptr3 = &n3;					
	int* parr[3] = { ptr1,ptr2,ptr3 };											// 포인트 변수를 배열로 묶을 수 있다
	printf("%d %d %d %d\n", *parr[0], *parr[1], *parr[2], *parr[0] * *parr[2]); // 포인트 배열 출력과 배열 연산
	printf("%p %p %p\n", parr[0], parr[1], parr[2]);							// 포인트 배열 주소값 출력



	return 0;
}