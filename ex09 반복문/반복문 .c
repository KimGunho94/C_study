#include<stdio.h>

/*
* �ݺ���( for, while, do-while )
*	for - ���� ���� ����ϴ� �ݺ���
*
*	break ���� ������ �����ҽ� �ݺ��� ���� 
*	conrinue ���� ������ �����ҽ� �Ʒ� �ݺ��� ���� ����
*
*/

int main(void)
{	// for�� 
	// for(;;) �Է½� ���� �ݺ� �ڵ� ����
	// for �ȿ� for�� ��� ����
	for (int i = 0; i < 5; i++) {	  // i �� 5���� ���� �� �Ʒ� �ڵ� ���� ��
		printf("�ȳ��ϼ��� %d\n", i); // i �� 5�� ���ų� Ŀ���� �ڵ� ���� x
	}
	for (int n = 1; n <= 10; n++) {	  //n �� 10�̶� ���ų� ������ �ؿ� �ڵ� ���� 1����� ���� ��Ŵ
		printf("���� %d\n", n);			  //n �� 10���� ũ�� ���� x
	}
	for (int a = 10; a >= 1; a--) {	  //a �� 1�̶�  ������ �� ���� �ݺ����� �Ʒ� �ڵ� ����
		printf("���� %d\n", a);		  // �ݺ� �� a�� 1���� �۾����� ���� ����
	}
	for (int b = 1; b <= 9; b++) {	  // �ݺ��� �ȿ� �ݺ����� ����Ͽ� �ڵ� �ۼ� ����
		for (int c = 1; c <= 9; c++) {
			printf("%d X %d = %d\n", b, c, b * c);
		}
	}

	// while �� 
	int var = 1;					  // ���� ������
	while (var <= 10) {				  // while ���� ����
		printf("���� %d\n", var);		  // while�� ������ ���̸� ���� ��
		var++;						  // var�� +1�� �߰�
	}
	int var1 = 10;
	while (var1 >= 1) {				  // var1�� 1�� ���ų� ũ�� �Ʒ� �ڵ� ����
		printf("���� %d\n", var1);
		var1--;						  // �ڵ� ���� �� var1�� -1
	}

	// do-while �� = ������ ����Ǳ� �� �ѹ��� ������ ���� 
	int var2 = 0;
	do {
		printf("�ȳ��ϼ��� %d\n", var2);
		var2++;
	} while (var2 < 2);

	// ���� 
	int var3 = 1;
	do {
		printf("���� %d\n", var3);
		var3++;

	} while (var3 <= 10);

	// ����
	int var4 = 10;
	do {
		printf("���� %d\n", var4);
		var4--;
	} while (var4 >= 1);



	// break �� 
	int num;						// ���� ����
	while (1) {						// while �� �������� ��� ����
		printf("1�Է½� ���� : ");
		scanf_s("%d", &num);		// scanf_s�� ���� �Է� ����
		if (num == 1) { 			// if ������ �Է��� ���� 1 �϶� break �� ����
			break;
		}
	} printf("����Ǿ����ϴ�.\n");



	// continue 
	int num1;
	while (1) {
		printf("2�� �Է��غ����� : \n");
		scanf_s("%d", &num1);
		if (num1 == 2) {
			continue;				// continue �Է½� ���ǿ� �����ϸ� 
									// �Ʒ� �ڵ带 ���� ���� �ʰ� 
									// ���� �ڵ�� ���ư��� ���� �Ѵ�.
		}
		printf("%d\n", num1);
	}


	return 0;
}