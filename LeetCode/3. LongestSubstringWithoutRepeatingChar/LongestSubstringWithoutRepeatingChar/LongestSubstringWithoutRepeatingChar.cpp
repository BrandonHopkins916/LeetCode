// LongestSubstringWithoutRepeatingChar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    string str1;

    printf("What string do you what to use:\n");

    cin >> str1;
    
    if (str1.empty())
    {
        printf("String is empty, exiting");
        exit(1);
    }

    int max = 0, left = 0;
    vector<int> arr(128, -1);
    for (int right = 0; right < str1.length(); right++)
    {
        if (arr[str1[right]] >= left)
        {
            left = arr[str1[right]] + 1;
        }
        arr[str1[right]] = right;
        max = std::max(max, right - left + 1);
    }
    cout << max;
    return max;
}
