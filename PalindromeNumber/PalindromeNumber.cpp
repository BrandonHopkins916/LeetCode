// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(int x)
{
    string s1;
    string s2;

    s1 = to_string(x);
    s2 = s1;
    reverse(s1.begin(), s1.end());

    if (s1 != s2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int i;
    bool results;
    cout <<"Int: \n";
    cin >> i;

   results = isPalindrome(i);

   if (results)
   {
       cout << "True";
   }
   else
   {
       cout << "False";
   }

}
