//test case
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "euclid.h"

//�ſ� ū �μ��� �� N�� ����

void test(int TIME) {
	//���� �õ尪 ���� (unsinged)�� ���� ������ x
	srand((unsigned)time(NULL));

	int a = rand();
	int b = rand();
	int i = 0;

	while (i < TIME) {
		//������ �� ���� ����
		a = rand();
		b = rand();

		euclid(a, b);
		loop_method(a, b);

		//�� �Լ��� ����� �ٸ� �� [����] ��� �� �ݺ��� Ż��
		if (euclid(a, b) != loop_method(a, b)) {
			printf("error");
			break;
		}
		printf("%d --- %d\n", euclid(a, b), i);
		i++;
	}
}