// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* dummyHead = new ListNode(0);
	ListNode* tail = dummyHead;
	int carry = 0;

	while( l1 != nullptr || l2 != nullptr || carry != 0 )
	{
		int digit1 = (l1 != nullptr) ? l1->val : 0;
		int digit2 = (l2 != nullptr) ? l2->val : 0;

		int sum = digit1 + digit2 + carry;
		int digit = sum % 10;
		carry = sum / 10;

		ListNode* newNode = new ListNode(digit);
		tail->next = newNode;
		tail = tail->next;

		l1 = (l1 != nullptr) ? l1->next : nullptr;
		l2 = (l2 != nullptr) ? l2->next : nullptr;
	}

	ListNode* result = dummyHead->next;
	delete dummyHead;
	return result;
};

int main()
{
	int inputNumber1, inputNumber2;
	printf("What numbers will you use?\n");

	cin >> inputNumber1 >> inputNumber2;
	
	ListNode* l1 = new ListNode( inputNumber1 );
	ListNode* l2 = new ListNode( inputNumber2 );

	addTwoNumbers(l1, l2);

    return 0;
}
