// 1672. Richest Customer Wealth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) 
{
    int sum = 0;
    int mx = INT_MIN;

    for (int i = 0; i < accounts.size(); i++)
    {
        sum = 0;
        for (int j = 0; j < accounts[0].size(); j++)
        {
            sum += accounts[i][j];
        }

        mx = max(mx, sum);
    }

    return mx;
}

int main()
{
    int customers, accounts;
    int m, n;
    cout << "How many customers do you have?" << "\n";
    cin >> customers;

    cout << "How many accounts does each customers have?"<< "\n";
    cin >> accounts;

    vector<vector<int>> v;

    for (int i = 0; i < customers; i++)
    {
        for (int j = 0; j < accounts; j++)
        {
            cin >> n;
            v.push_back(v[n]);
        }
        cin >> m;
        v.push_back(v[m]);
    }

    return 0;
}
