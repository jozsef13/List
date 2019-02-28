#include "CList.h"

int main()
{
	CList list;
	int i, value, node, smaller;

	do
	{
		cout << "What operation do you want to execute?" << endl;
		cout << "1.Add a node." << endl;
		cout << "2.Erase a node." << endl;
		cout << "3.Erase multiple nodes that have a value smaller than a value introduced by you." << endl;
		cout << "4.Calculate the arithmetic average of the elements from the list." << endl;
		cout << "5.Print the list." << endl;
		cout << "6.Sort the list." << endl;
		cout << "7.Exit." << endl;
		cin >> i;

		switch (i)
		{
		case 1:
			cout << endl << "Introduce the value of the node: ";
			cin >> value;
			list.add(value);
			cout << endl;
			break;
		case 2:
			cout << endl << "Enter the node you want to delete: ";
			cin >> node;
			list.deleteElement(node);
			cout << endl;
			break;
		case 3:
			cout << endl << "Enter the value: ";
			cin >> smaller;
			list.eraseSmaller(smaller);
			cout << endl;
			break;
		case 4:
			cout << endl << "The arithmetic average of the elements from the list is: " << list.arithmeticAverage() << endl;
			cout << endl;
			break;
		case 5:
			cout << endl << "Here are the nodes: ";
			list.print();
			cout << endl << endl;
			break;
		case 6:
			list.sortList();
			cout << "The list has been sorted!" << endl;
			cout << endl;
			break;
		case 7:
			return 0;
		}

	} while (i != 7);

	return 0;
}