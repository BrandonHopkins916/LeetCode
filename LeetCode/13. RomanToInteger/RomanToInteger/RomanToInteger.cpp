// RomanToInteger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int romanToInt(string s) 
{
	unordered_map<char, int> m;

	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

	int answer = 0;

	if (s.length() > 15)
	{
		printf("String length is too long\n");
		exit(1);
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (m[s[i]] < m[s[i+1]])
		{
			answer = answer - m[s[i]];
		}
		else
		{
			answer = answer + m[s[i]];
		}
	}

	return answer;
}

int main()
{
    string s;

    cin >> s;

	int finish = romanToInt(s);

	cout << finish;
	return finish;
}
