// 5. LongestPalindromicSubstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

bool check(string& s, int i, int j) 
{
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

string longestPalindrome(string s)
{
	int n = s.size();
	int sIndex = 0;
	int mLen = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (check(s, i, j))
			{
				if (j-i+1 > mLen)
				{
					mLen = j - i + 1;
					sIndex = i;
				}
			}
		}
	}
	return s.substr(sIndex, mLen);
}

int main()
{
	string s;

	printf("What is your string\n");
	cin >> s;

	longestPalindrome(s);
}
// Best appraoch Optimized
//class Solution {
//private:
//	bool solve(vector<vector<bool>>& dp, int i, int j, string& s) {
//		if (i == j) {
//			return dp[i][j] = true;
//		}
//		if (j - i == 1) {
//			if (s[i] == s[j]) {
//				return dp[i][j] = true;
//			}
//			else {
//				return dp[i][j] = false;
//			}
//		}
//		if (s[i] == s[j] && dp[i + 1][j - 1] == true) {
//			return dp[i][j] = true;
//		}
//		else {
//			return dp[i][j] = false;
//		}
//	}
//public:
//	string longestPalindrome(string s) {
//		int n = s.size();
//		int startIndex = 0; int maxlen = 0;
//		vector<vector<bool>> dp(n, vector<bool>(n, false));
//		for (int g = 0; g < n; g++) {
//			for (int i = 0, j = g; j < n; i++, j++) {
//				solve(dp, i, j, s);
//				if (dp[i][j] == true) {
//					if (j - i + 1 > maxlen) {
//						startIndex = i;
//						maxlen = j - i + 1;
//					}
//				}
//			}
//		}
//		return s.substr(startIndex, maxlen);
//	}
//};