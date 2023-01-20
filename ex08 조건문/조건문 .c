#include<stdio.h>
/*
*  1.���ǹ�( if, else if, else )
*	it		= ���� �� ���� ������ �� ������ �ȵ�( if ���Ǿȿ� if ���� ������ ��밡��)
*	else if  = if ������ �����̰� else if ������ ���̸� ����
*	else		= if���ǰ� else if ������ �������� ������ ����
*
*  2.���ǹ�( switch )
*	switch (����) �� ���� ��
*
*	case :�Ʒ� ������ ���ΰ��� ���� �Ѵ�.
*		break
*/


int main(void)
{
	//1.���ǹ�(if, else if, else)
	int num = 3;
	if (num < 3) {
		printf("num is smaller than 3!"); // ������ ���̸� ����
	}
	else if (num == 2) {
		printf("Hello"); // ���� if ������ �����̰� ������ ���̸� ����
	}
	else if (1 == 1) {
		printf("World\n"); // ���� ������ ���� ���̸� �ؿ� �ִ� ������ ������� ����
	}
	else {
		printf("�ȳ��ϼ���"); // ���� ������ ��� ������ �� ����
	}

	//2.���ǹ�( switch )
	switch (5)  // switch(����)
	{
	case 1:
		printf("Hello"); // ������ �����̸� ������� �ʴ´�.
		break;  // ���� ������ ���̸� ������ �극��ũ
		// break�� �� ������� ������ �ڿ� ������ �����̶� �����


	case 2:
		printf("World");
		break;

	default: // ���� ������ ��� ������ �� �����
		printf("Default");
		break;
	}

	// switch �� ���� 
	int var;
	printf("input some positive number : ");
	scanf_s(" %d", &var); // ���밪 �Է�

	switch (var) // �Էµ� ���밪�� ���� ���� Ž��
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
	printf("switch state end.\n"); // ������ ������ �Ŀ� ���� 

	return 0;



}