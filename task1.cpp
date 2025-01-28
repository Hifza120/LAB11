#include"CircularLinkedList.h"
int main() {
	CircularLinkedList C;
	C.insertAtTail(1);
	C.insertAtTail(2);
	C.insertAtTail(3);
	C.insertAtTail(4);
	C.insertAtTail(5);
	C.insertAtTail(6);
	C.insertAtTail(7);
	C.insertAtTail(8);
	C.insertAtTail(9);
	C.insertAtTail(10);
	C.display();
	cout << " Result :" << C.findKthToLast(3) << endl;
	return 0;
}