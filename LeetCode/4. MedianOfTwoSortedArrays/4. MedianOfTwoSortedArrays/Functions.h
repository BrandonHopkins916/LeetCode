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

	bool checkValue(vector<int>& nums1, vector<int>& nums2)
	{
		int m = nums1.size();
		int n = nums2.size();
		int total = m + n;

		if( m <= 0 || m > 1000 )
		{
			printf("Exiting Program, m is wrong value\n");
			return 0;
		}

		if( n <= 0 || n > 1000 )
		{
			printf("Exiting Program, n is wrong value\n");
			return 0;
		}

		if (total <= 1 || total > 2000)
		{
			printf("Exiting Program, m + n is either too big or too small\n");
			return 0;
		}
		return true;
	}

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
	{
		vector<int> combine;

		int m = nums1.size();
		int n = nums2.size();

		for (int i = 0; i < m; i++)
		{
			combine.push_back(nums1[i]);
		}
		for (int i = 0; i < n; i++)
		{
			combine.push_back(nums2[i]);
		}

		sort(combine.begin(), combine.end());

		int combineSize = combine.size();

		return combineSize % 2 ? combine[combineSize / 2] : (combine[combineSize / 2 - 1] + combine[combineSize / 2]) / 2.0;
	}
};
