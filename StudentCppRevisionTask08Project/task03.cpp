#include "tasks.h"

/*	Task 03. Ordering Numbers [�������������� �����]
 *
 *	���� ��� �����. ����������� �� � ������� ����������.
 *
 *  ����������
 *  1) ���������� �������� �������� ����� ����������-����������,
 *  � ����� ��� ���������� �� ���������� � ���� ����� ������.
 *
 *  ������ ������� ������ [input]
 *	�� ���� ������� �������� ��� ����� ����� ���� int.
 *
 *	������ �������� ������
 *	������� ������ ���������� � ���� ������ ��� �����, ������� ����������� � �������
 *  ����������. ����� � ������ ������ ���� ��������� ���� �� ����� ����� ��������.
 *
 *	[ input 1]: 7 6 1
 *	[output 1]: 1 6 7
 *
 *	[ input 2]: 6 7 2
 *	[output 2]: 2 6 7
 *
 *	[ input 3]: 7 4 7
 *	[output 3]: 4 7 7
 */

string task03(int a, int b, int c) {

	if (a > b) {
		if (b > c) {
			int temp = c;
			c = a;
			a = temp;
		}
		else {
			int temp = b;
			b = a;
			a = temp;
			temp = c;
			c = b;
			b = temp;
		}
	}
	else if (a > c) {
		int temp = c;
		c = a;
		a = temp;
	}
	if (b > c) {
		int temp = c;
		c = b;
		b = temp;
	}

	string result = to_string(a) + " " + to_string(b) + " " + to_string(c);
	
	return result;
}