#include "tasks.h"

/*	Task 02. Min Number [���������� �����]
 *
 *	���� ������ ����� �����. ���������� ���������� �����.
 *
 *	������ ������� ������ [input]
 *	�� ���� ������� �������� ������ ����� ����� ���� int.
 *
 *	������ �������� ������ [output]
 *	������� ������ ���������� ���������� �� �������� �����.
 *
 *	[ input 1]: 1 2 3 4
 *	[output 1]: 1
 *
 *	[ input 2]: 7 7 7 7
 *	[output 2]: 7
 *
 *	[ input 3]: -1 -2 -3 -4
 *	[output 3]: -4
 */

int task02(int a, int b, int c, int d) {
	int result = a;
	result = result > b ? b : result;
	result = result > c ? c : result;
	result = result > d ? d : result;

	return result;
}