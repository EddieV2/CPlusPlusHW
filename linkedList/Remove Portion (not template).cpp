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
	LinkedList();
	void addFront(const int& e);
	void removeFront();

private:
	Node *head;
};

LinkedList::LinkedList() : head(NULL){}

void LinkedList::addFront(const int& e) {
	Node *newNode = new Node;
	newNode->data = e;
	newNode->nextPtr = head;
	head = newNode;
	cout << head->data << endl;

}

void LinkedList::removeFront() {
	while (head != NULL) {
		Node *old = head;
		head = old->nextPtr;
		delete old;
	}
}
int main()
{
	LinkedList a;
	a.addFront(5);

	LinkedList r;
	r.removeFront();
}
