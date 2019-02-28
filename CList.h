#ifndef CLIST_H
#define CLIST_H
#include <iostream>
#include <cstdlib>
using namespace std;


class CList
{
public:
	CList() : head(NULL) {}
	void add(int v);
	int deleteElement(int key);
	void print() const;
	void eraseSmaller(int key);
	float arithmeticAverage();
	int sortList();

private:
	struct Node
	{
		int val;
		Node *next;
	
		void print() const
		{
			cout << val << " ";
		}
	};

	Node *head;

	int emptyList() const
	{
		return head == NULL;
	}
	
};

#endif // !CLIST_H