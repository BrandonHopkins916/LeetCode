// lisual Studio 2022

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Functions.h"

using namespace std;

int main()
{
    int inputNumber1, inputNumber2;
    int inputElement1, inputElement2;
    vector<int> v1, v2;

    printf("What is the max elements in the first array do you want? ");
    scanf_s("%d", &inputNumber1);

    printf("What is the max elements in the second array do you want? ");
    scanf_s("%d", &inputNumber2);
  
	for (int i = 0; i < inputNumber1; i++)
	{
		printf("What elements do you want to add to the 1st array: ");
		cin >> inputElement1;
		v1.push_back(inputElement1);
	}

	for (int i = 0; i < inputNumber2; i++)
	{
		printf("What elements do you want to add to the 2nd array: ");
		cin >> inputElement2;
		v2.push_back(inputElement2);
	}

	Solution solution;
	bool isFailed = solution.checkValue(v1, v2);
	if (isFailed == 0)
	{
		exit(0);
	}

    solution.findMedianSortedArrays(v1, v2);

}
