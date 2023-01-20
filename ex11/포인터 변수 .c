#include<stdio.h>

/* 
*	������ = �޸� �ּҰ� 
*	 - �޸� ��ĭ�� 1byte�� �����Ѵ�.
*	 - �޸��� �� �濡�� �ּҰ��� �ְ� ���� ����� �޸� �ּҰ��� �Ҵ�޴´�.
*	 - �޸��� �ּҰ��� 16������ ǥ���ȴ�.
*	
*	������ ���� ����) �޸��� �ּҰ��� ������ �ʱ�ȭ ��Ų�� ��) (int* parr = &num;)
*					  �޸𸮿��� �� ����� ������ ������ �����ϸ�
*					  �޸𸮸� �Ҵ�ް� �޸� �ּҰ��� ����Ǹ�
*					  �޸��� �ּҰ��� �����Ͽ� �ҷ��ü� �ִ�.
*					  �޸��� �ּҰ��� ��� �ٲ��.
* 
*	�迭 �ּҰ� 
*	= �迭�� �迭 �ε�����ȣ 0��( �迭 ù��° )
*	  �޸� �ּҰ��� �������� ���ʴ�� �޸� �ּҰ��� �Ҵ� �޴´�.
*	
*/
int main(void)
{	// ������ ���� ����
	int num = 10;					// ������ �����ϸ� �޸𸮸� �Ҵ�ް� �����Ѵ�.
	// ������ ���� ���� = �ʱ�ȭ	
	int* pnum = &num;				// �����ͺ��� ���� ���� �տ� * �ٿ��ְ� & ���������� �ʱ�ȭ ���ش�.
	printf("%p\n", &num);			// �޸��� �ּҰ��� �ҷ����� ���
	printf("%p\n", pnum);			// num�� ���� �ּҰ��� �ҷ��´�.
	printf("%d\n", *pnum);			// �����ͺ����� �ּҰ��ȿ� �����͸� �ҷ����� ���
	
	// ������ ���� ��)
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	// *(����)�� &(����) �ּҰ��� �ʱ�ȭ ���ش�.
	char* cptr = &cnum;				
	int* iptr = &inum;				
	double* dptr = &dnum;			

	// �ּҰ� ���
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	// �ּҰ��ȿ� ������ ȣ��
	printf("%d\n", *cptr);
	printf("%d\n", *iptr);
	printf("%g\n", *dptr);			// �Ǽ��� ������ ��½� %g�� ���

	// �ּ� ������ ������ ����
	int inum1 = 999;
	int* pinum = &inum1;
	*pinum = 10;					
	// inum1�� �����͸� *pinum �ּ� �� �ȿ� �����͸� �����Ѵ�.
	printf("%d\n", inum1);

	// �迭 ������ 
	// ù��° �����͸� �������� ���������� ������ �ּҰ� ���� 
	int myArray[3] = { 1,2,3 };
	printf("%p\n", myArray);			// ù��° �ּҰ��� ����Ų��.
	printf("%p\n", &myArray[0]);
	printf("%p\n", &myArray[1]);
	printf("%p\n", &myArray[2]);

	for (int i = 0; i < 4; i++) {
		printf("%p\n", &myArray[i]);    // for���� ���� �ּҰ��� ����Ҽ� �ִ�.
	}

	short sarr[3] = { 1,2,3 };
	int iarr[3] = { 10,20,30 };

	// �ε��� ��ȣ�� ���� ����
	printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);
	
	// ������ ������ ���� ����
	// short = 2byte /*(short + 1) = +2byte��ŭ �̵� �� �ּҰ��� ����� ������ ȣ��
	printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2)); 

	// int =  4byte  /*(int + 1)   = +4byte��ŭ �̵� �� �ּҰ��� ����� ������ ȣ��
	printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2)); 

	// �ּ� Ȯ��
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
	 
	// ������ �迭 ���
	int n1 = 3, n2 = 6, n3 = 9;			// ���� ����
	// ����Ʈ ������ �ʱ�ȭ
	int* ptr1 = &n1;				
	int* ptr2 = &n2;					
	int* ptr3 = &n3;					
	int* parr[3] = { ptr1,ptr2,ptr3 };											// ����Ʈ ������ �迭�� ���� �� �ִ�
	printf("%d %d %d %d\n", *parr[0], *parr[1], *parr[2], *parr[0] * *parr[2]); // ����Ʈ �迭 ��°� �迭 ����
	printf("%p %p %p\n", parr[0], parr[1], parr[2]);							// ����Ʈ �迭 �ּҰ� ���



	return 0;
}