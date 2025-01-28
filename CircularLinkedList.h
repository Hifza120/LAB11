#include"LinkedList.h"
class CircularLinkedList :public LinkedList {
public:
	void insertAtHead(int);
	void insertAtTail(int);
	 int deleteFromHead();
	 int deleteFromTail();
	bool isEmpty();
	void display();
	int findKthToLast(int k);
};
int CircularLinkedList::findKthToLast(int k) {
	int size = 0;
	Node* t1 = tail->next;
	while (true) {
		t1 = t1->next;
		size++;
		if (t1 == tail->next) {
			break;
		}


	}
	if (k >= size) {
		return -1;
	}
	int index = size - k;
	Node* temp = tail->next;
	int iteration = 0;
	while (true) {
		temp = temp->next;
		iteration++;
		if (index == iteration) {
			break;
		}
		if (temp== tail->next) {
			break;
		}


	}
	
	return temp->data;

}
void CircularLinkedList::insertAtHead(int value) {
	Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	if (tail == nullptr) {
		tail = nn;
		tail->next = nn;
	}
	else {
		nn->next = tail->next;
		tail->next = nn;
	}
}
bool  CircularLinkedList::isEmpty() {
	return  tail == nullptr;
}
void  CircularLinkedList::display() {
	if (isEmpty()) {
		cout << "LinkedList is Empty" << endl;
	}
	else {
		Node* t = tail->next;
		while (true) {
			cout << t->data << "    ";
			t = t->next;
			if (t == tail->next) {
				break;
			}
		}
		cout << endl;
	}
}
void CircularLinkedList::insertAtTail(int value) {
	Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	if (tail == nullptr) {
		tail = nn;
		tail->next = nn;
	}
	else {
		nn->next = tail->next;
		tail->next= nn;
		tail = nn;
	}
}
int  CircularLinkedList::deleteFromHead() {
	if (isEmpty()) {
		cout << " IT WAS AN EMPTY LINKEDLIST " << endl;
		return NULL;
	}
	else if (tail == tail->next) {
		int rv = tail->data;
		delete tail;
		tail = nullptr;
		return rv;
	}
	else {
		int rv = tail->next->data;
		Node* t = tail->next;
		tail->next = tail->next->next;
		delete t;
		t = nullptr;
		return rv;
	}

}
int CircularLinkedList::deleteFromTail() {
	if (isEmpty()) {
		cout << " IT WAS AN EMPTY LINKEDLIST " << endl;
		return NULL;
	}
	else if (tail == tail->next) {
		int rv = tail->data;
		delete tail;
		tail = nullptr;
		return rv;
	}
	else {
		int rv = tail->data;
		Node* t = tail->next;
		while (true) {
			t = t->next;
			if (t->next == tail) {
				break;
			}

		}
		t->next = tail->next;
		delete tail;
		tail = t;
		return rv;

	}
}