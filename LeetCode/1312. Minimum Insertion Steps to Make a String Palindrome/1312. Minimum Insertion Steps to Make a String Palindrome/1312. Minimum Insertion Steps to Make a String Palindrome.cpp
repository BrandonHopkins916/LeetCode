// 1312. Minimum Insertion Steps to Make a String Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int minInsertions(string s)
{
	int n = s.length();
	vector<int> dp(n);

	for (int i = n - 2; i >= 0; i--)
	{
		int prev = 0;
		for (int j = i + 1; j < n; j++)
		{
			int temp = dp[i];
			if (s[i] == s[j])
			{
				dp[j] = prev;
			}
			else
			{
				dp[i] = min(dp[j], dp[j - 1]) + 1;
			}
			prev = temp;
		}
	}

	return dp[n - 1];
}

int main()
{
	string s = "mbadm";

	minInsertions(s);

}
