#include<stdio.h>
/*
* printf // �⺻ ����Լ� (�����)
* \a�����, \b�齺���̽�, \n �ٹٲ� \f ���ǵ� \r ĳ���� ����
*
* scanf //�⺻ �Է� �Լ�
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