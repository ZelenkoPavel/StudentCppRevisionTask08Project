#include "tasks.h"

/*	Task 01. The Same Numbers [����������� �����]
 *
 *	���� ������ ����� �����. ����������, ������� �� ��� �����������.
 *	���� ����� �� ���������, �� ���������� ���������� ����.
 *
 *	������ ������� ������ [input]
 *	�� ���� ������� �������� ������ ����� ����� ���� int.
 *
 *	������ �������� ������ [output]
 *	������� ������ ���������� ���������� ����������� ����� ��� ����,
 *	���� ����� ����� ���.
 *
 *	[ input 1]: 7 7 7 7
 *	[output 1]: 4
 *
 *	[ input 2]: 7 7 7 8
 *	[output 2]: 3
 *
 *	[ input 3]: 7 7 8 9
 *	[output 3]: 2
 *
 *	[ input 4]: 6 7 8 9
 *	[output 4]: 0
 */

int task01(int a, int b, int c, int d) {
	int size = 4;
	int* vector = new int[size];
	*vector = a;
	*(vector + 1) = b;
	*(vector + 2) = c;
	*(vector + 3) = d;

	int result = 0;
	for (int i = 0; i < size; i++) {
		int number = *(vector + i);
		int count = 1;
		for (int j = i + 1; j < size; j++) {
			if (number == *(vector + j)) {
				count++;
			}
		}
		if (count > result) {
			result = count;
		}
	}

	delete[] vector;

	return result == 1 ? result - 1 : result;
}