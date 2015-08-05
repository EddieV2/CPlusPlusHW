#include "stdafx.h"
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *nextPtr;

	friend class LinkedList;
};

class LinkedList {
public:
	void addFront(const int& e);

private:
	Node *head = NULL;
};

void LinkedList::addFront(const int& e) {
	Node *newNode = new Node;
	newNode->data = e;
	newNode->nextPtr = head;
	head = newNode;
	cout << head->data << endl;
}

int main()
{
	LinkedList add;
	add.addFront(15);
	add.addFront(5);
	add.addFront(6);
}