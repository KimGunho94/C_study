#include <stdio.h>

/*
*	1. �� ������ (< , > ==, 1=, <=, >=)
*	2. ���� ������ (++, --)
*	3. �� ������ ( &&(AND), ||(OR), !(NOT) )
*	4. ���� ���� ������ ( ������ ���̸� ù��° �����̸� �ι�° "" : "" )
*/

int main()
{
	int a = 10, b = 20;

	// �� ������

	printf("a == b : %d\n", a == b); // ���� 
	printf("a > b : %d\n", a > b);	// a�� ũ��
	printf("a < b : %d\n", a < b);	// b�� ũ�� 
	printf("a >= b : %d\n", a >= b);	// a�� b�� ���ų� ũ�� 
	printf("a <= b : %d\n", a <= b);	// b�� a�� ���ų� ũ�� 
	printf("a != b : %d\n", a != b);	// a�� b�� �ٸ��� 
	// ���� ���̸� 1�� ��ȯ�ϰ� �����̸� 0�� ��ȯ�Ѵ�.

	// ���� ������
	// printf("%d\n", ++a); // ���ϰ� ���
	// printf("%d\n", a++); //����ϰ� ���ϰ�

	printf("a : %d\n", a);
	printf("a : %d\n", a++);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", --b);
	printf("b : %d\n", b);

	// �� ������
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

	// ���� ���� ������
	10 == 10 ? printf("��") : printf("����");
	// ���� ������ ���̸� ù��° ��� �����̸� �ι�° ���

	int num, absolute;
	printf("���� �Է� :");
	scanf_s("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("���밪 %d\n", absolute);


	return 0;
}