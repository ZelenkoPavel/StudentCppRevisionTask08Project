#include "tasks.h"

/*	Task 01. The Same Numbers [совпадающие числа]
 *
 *	Даны четыре целых числа. Определите, сколько из них совпадающих.
 *	Если числа не совпадают, то необходимо возвратить ноль.
 *
 *	Формат входных данных [input]
 *	На вход функция получает четыре целых числа типа int.
 *
 *	Формат выходных данных [output]
 *	Функция должна возвратить количество совпадающих чисел или ноль,
 *	если таких чисел нет.
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