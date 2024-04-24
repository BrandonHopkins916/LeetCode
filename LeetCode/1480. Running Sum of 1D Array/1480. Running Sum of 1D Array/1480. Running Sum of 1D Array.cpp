// 1480. Running Sum of 1D Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> runningSum(vector<int>& nums) 
{
    int size = nums.size();
    int sum = 0;

    if (size > 10001)
    {
        exit(1);
    }

    for(int i = 0; i < size; i++)
    {
        sum += nums[i];
        nums[i] = sum;
    }

    return nums;

}

int main()
{
    int k, inputNumber;

    vector<int> v;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> inputNumber;
        v.push_back(inputNumber);
    }

    runningSum(v);

    return 0;
}
