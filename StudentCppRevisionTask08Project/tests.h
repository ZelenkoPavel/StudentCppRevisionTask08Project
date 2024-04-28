#pragma once
#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(7, 7, 7, 7) == 4
		&& task01(7, 7, 7, 8) == 3
		&& task01(7, 7, 8, 9) == 2
		&& task01(6, 7, 8, 9) == 0
		&& task01(-7, -7, -7, -7) == 4
		&& task01(7, 7, 8, 7) == 3
		&& task01(7, 8, 7, 7) == 3
		&& task01(8, 7, 7, 7) == 3
		&& task01(7, 8, 9, 7) == 2
		&& task01(7, 9, 8, 7) == 2
		&& task01(7, 8, 8, 7) == 2
		&& task01(7, 8, 7, 8) == 2
		&& task01(7, 7, 8, 8) == 2
		&& task01(8, 7, 7, 8) == 2
		&& task01(8, 7, 8, 7) == 2
		&& task01(8, 9, 7, 7) == 2;

	cout << "Task 01 [The Same Numbers]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(1, 2, 3, 4) == 1
		&& task02(7, 7, 7, 7) == 7
		&& task02(-1, -2, -3, -4) == -4
		&& task02(2, 1, 3, 4) == 1
		&& task02(2, 3, 1, 4) == 1
		&& task02(2, 3, 4, 1) == 1
		&& task02(0, 0, 0, 0) == 0
		&& task02(-2, -3, -4, -1) == -4
		&& task02(-3, -4, -1, -2) == -4
		&& task02(-4, -1, -2, -3) == -4;

	cout << "Task 02 [Min Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(7, 6, 1) == "1 6 7"
		&& task03(6, 7, 2) == "2 6 7"
		&& task03(7, 7, 4) == "4 7 7"
		&& task03(7, 4, 7) == "4 7 7"
		&& task03(4, 7, 7) == "4 7 7"
		&& task03(1, 2, 3) == "1 2 3"
		&& task03(1, 3, 2) == "1 2 3"
		&& task03(2, 1, 3) == "1 2 3"
		&& task03(2, 3, 1) == "1 2 3"
		&& task03(3, 1, 2) == "1 2 3"
		&& task03(3, 2, 1) == "1 2 3"
		&& task03(1, 1, 1) == "1 1 1";

	cout << "Task 03 [Ordering Numbers]" << (result ? RIGHT : WRONG) << endl;
}


void testingTask04() {
	bool result = task04(23, 52, 8, 43) == 8
		&& task04(14, 7, 6, 11) == 1

		&& task04(23, 52, -1, 43) == -1
		&& task04(0, 52, 6, 43) == -1
		&& task04(24, 10, 8, -24) == -1
		&& task04(-24, 10, 8, 24) == -1
		&& task04(24, -10, 8, 24) == -1
		&& task04(24, 0, 8, 24) == -1
		&& task04(24, 10, 9, 25) == -1
		&& task04(10, 24, 9, 25) == -1
		&& task04(14, 10, 11, 7) == -1
		&& task04(10, 14, 11, 7) == -1

		&& task04(23, 52, 0, 43) == 0
		&& task04(7, 14, 6, 11) == 1
		&& task04(14, 8, 4, 8) == 4
		&& task04(8, 14, 4, 8) == 4
		&& task04(8, 14, 4, 12) == 2
		&& task04(52, 23, 20, 8) == 3
		&& task04(8, 25, 8, 23) == 0
		&& task04(53, 41, 20, 25) == 20
		&& task04(46, 41, 20, 25) == 20
		&& task04(10, 6, 1, 2) == 1;

	cout << "Task 04 [Student and Swimming Pool]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = taskX(4, 6, 5, 6, 5, 6)
		&& !taskX(5, 3, 5, 2, 3, 4)
		&& !taskX(3, 5, 5, 2, 3, 4)
		&& !taskX(5, 5, 3, 2, 3, 4)
		&& !taskX(3, 5, 5, 2, 4, 3)
		&& !taskX(3, 5, 5, 3, 2, 4)
		&& !taskX(3, 5, 5, 3, 4, 2)
		&& !taskX(3, 5, 5, 4, 2, 3)
		&& !taskX(3, 5, 5, 4, 3, 2)
		&& !taskX(5, 5, 5, 4, 4, 4)
		&& !taskX(5, 5, 4, 4, 4, 4)
		&& !taskX(5, 4, 5, 4, 4, 4)
		&& !taskX(4, 5, 5, 4, 4, 4)
		&& !taskX(5, 4, 4, 4, 4, 4)
		&& !taskX(4, 5, 4, 4, 4, 4)
		&& !taskX(4, 4, 5, 4, 4, 4)
		&& !taskX(2, 1, 1, 1, 1, 1)
		&& !taskX(1, 2, 1, 1, 1, 1)
		&& !taskX(1, 1, 2, 1, 1, 1)

		&& taskX(4, 5, 6, 6, 5, 6)
		&& taskX(6, 4, 5, 6, 5, 6)
		&& taskX(6, 5, 4, 6, 5, 6)
		&& taskX(5, 6, 4, 6, 5, 6)
		&& taskX(5, 4, 6, 6, 5, 6)
		&& taskX(4, 6, 5, 6, 6, 5)
		&& taskX(4, 6, 5, 5, 6, 6)
		&& taskX(4, 4, 4, 5, 5, 5)
		&& taskX(1, 1, 1, 1, 1, 1)
		&& taskX(1, 1, 1, 2, 1, 1)
		&& taskX(1, 1, 1, 1, 2, 1)
		&& taskX(1, 1, 1, 1, 1, 2)
		&& taskX(4, 4, 4, 4, 4, 4)
		&& taskX(4, 4, 4, 4, 5, 5)
		&& taskX(4, 4, 4, 5, 4, 5)
		&& taskX(4, 4, 4, 5, 5, 4)
		&& taskX(4, 4, 4, 4, 4, 5)
		&& taskX(4, 4, 4, 4, 5, 4)
		&& taskX(4, 4, 4, 5, 4, 4);

	cout << "Task X [Rectangular World 3]" << (result ? RIGHT : WRONG) << endl;
}
