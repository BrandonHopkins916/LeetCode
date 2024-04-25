// 1137. N-th Tribonacci Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Function.h"

int main()
{
	int x;

	printf("What number did you want to start with?\n");
	scanf_s("%d", &x);

	Solution solution;

	solution.tribonacci(x);
}

