/*
* ���α׷� ���� : ��������� �̿��� ���� ���ҹ�, �ִ� ����� ���ϱ�, ���α׷� ���� �ð� ����
* �й� : 202011309
* �̸� : �ӹα�
*/
//���� �Լ�
#include "euclid.h"
#include <stdio.h>
#include <time.h>

#define TIME 5000

int main() {

	time_t start, end;
	double result;

	//���� ����
	start = time(NULL);

	euclid(10, 20);
	loop_method(10, 20);
	test1_euclid();
	test(TIME);
	//���� ��
	end = time(NULL);
	//���� ������ ���
	result = (double)(end - start);

	printf("%lf", result);

	/*type2 clock()
	* clock_t start, end;
	* double reulst;
	* start = clock();
	* ������ �ڵ�
	* end = clock();
	* result = (double)(end - start);
	* ��� ��� 
	*/

	return 0;
}