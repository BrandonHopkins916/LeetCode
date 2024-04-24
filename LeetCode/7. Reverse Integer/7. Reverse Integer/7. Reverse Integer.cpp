// 7. Reverse Integer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int reverse(int x) 
{    
    long rev = 0;
    while (x != 0)
    {
        long rem = x % 10;
        rev = (rev * 10) + rem;
        x /= 10;
    }
    if (rev > INT_MAX || rev < INT_MIN)
        return 0;

    return int(rev);
}

int main()
{
    int number, reverseNumber;
    cin >> number;

    reverseNumber = reverse(number);

    cout << reverseNumber;

    return reverseNumber;
}
