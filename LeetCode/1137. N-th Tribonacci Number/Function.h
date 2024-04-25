#pragma once

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:

	int tribonacci(int n) 
	{
		
		int t1=0,t2=0, nextTerm=0;
		for (int j = 0; j <= n; j++)
		{
			if (n == 1 || n == 2)
			{
				nextTerm = n;
				return 1;
			}
			
			if (j == 1)
			{
				t1 = 1;
				continue;
			}
			if (j == 2)
			{
				t2 = 1;
				continue;
			}
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
		}
		
		printf("%d", nextTerm);

		return 0;

	}

};