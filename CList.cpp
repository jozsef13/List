#include "CList.h"

void CList::add(int v)
{
	Node *temp = new Node;
	Node *p = head;
	temp->val = v;
	temp->next = NULL;

	if (emptyList())
	{
		head = temp;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
		p = p->next;
	}
}

int CList::deleteElement(int key)
{
	Node *temp = head;
	Node *prev = NULL;

	if (temp != NULL && temp->val == key)
	{
		head = temp->next;
		free(temp);
		return 0;
	}

	while (temp != NULL && temp->val != key)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL) return 0;

	prev->next = temp->next;
	free(temp);
	return 0;
}

void CList::eraseSmaller(int key)
{
	int number;
	Node *p = head;
	while (p)
	{
		number = p->val;

		if (number < key)
		{
			p = p->next;
			deleteElement(number);
		}
		else p = p->next;
	}
}

float CList::arithmeticAverage()
{
	float average = 0;
	int count = 0;
	Node *p = head;
	while (p)
	{
		average += p->val;
		p = p->next;
		count++;
	}

	return average / count;
}

int CList::sortList()
{
	int swapped = 0;
	int temp;
	Node *p;	
	Node *q = NULL;

	if (head == NULL)
		return 0;

	do
	{
		swapped = 0;
		p = head;
		
		while (p->next != q)
		{
			if (p->val > p->next->val)
			{
				temp = p->val;
				p->val = p->next->val;
				p->next->val = temp;
				swapped = 1;
			}
			p = p->next;
		}
		q = p;
	} while (swapped);
}

void CList::print() const
{
	for (Node *p = head; p; p = p->next)
	{
		p->print();
	}
}