#include<stdio.h>

/*
* �迭 ( ����, �ʱ�ȭ, ���� )
* �迭 ���� = int result[��];
* 
* ���� ���� ���
*/

int main(void)
{	// ����� ���ÿ� �ʱ�ȭ	
	int result[4] = {1,2,3,4};				// result[]; �� ���ȣ �ȿ� �󸶳� �����͸� ������ ����
				  //(0,1,2,3)�ε��� ��ȣ	// �߰�ȣ �ȿ� ������ �ʱ�ȭ
	printf("%d\n", result[3]);				// �ε��� ��ȣ�� ������ ���� Ȯ�� �����ϴ�
	
	// ���� �ʱ�ȭ 
	char result1[2];						// result[] �迭 ������
	result1[ 0 ] = 'a';						// �ε��� ��ȣ�� ������ �ʱ�ȭ
	result1[1] = 'b';

	printf("%c\n", result1[0]);	
	printf("%c\n", result1[1]);

	// ����
	int  result2[] = { 1,2,3 };				// ����� ���ÿ� �ʱ�ȭ
	printf("%d\n", result2[0]);				// ����

	char myArray1[5] = { 'a','b','c','d','e'}; 
	//printf("%c\n", myArray1[0]);			// ���� ��� ���
	//printf("%c\n", myArray1[1]);
	//printf("%c\n", myArray1[2]);
	//printf("%c\n", myArray1[3]);
	for (char i = 0; i  <  5; i++) {		// for ������ ���� �Է�
	printf("%c\n", myArray1[i]);			// myArray[i]�� �ݸ� ���� 
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
	
	// ���� ���� ���
	char result3[] = "Hello";		    // ���ڴ� = ""; �� �ʱ�ȭ ����(����) //" ���� "; ���鵵  �޸𸮸� �����Ѵ�. 
	result3[4] = '\0';			    	// ���ڿ� ���� \0(null ����)�� �ڵ� ����Ǿ� ����� 1�� �þ��.
								    	// \0(null ����) ���� �߰��� �Է��ϸ� ���ڳ��̶�� �ν���
	printf("\n%s\n", result3);		    // ���ڿ� ��� ��� %s

	char result4[] = "���� ������ �迭�� ����, �ʱ�ȭ, ���� ����Դϴ�.";	// �ѱ��� ���ڴ� 2����Ʈ
	result4[25] = '\0';
	printf("%s\n", result4);

	//char result5[] = "���� ������ �迭�� ����, �ʱ�ȭ, ���� ����Դϴ�.";
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