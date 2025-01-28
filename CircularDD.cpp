#include"CircullarLinkedList.h"
int main() {

	CircularDoublyLL CD;
	CD.insertAtTail(5);
	CD.insertAtTail(1);
	CD.insertAtTail(2);
	CD.insertAtTail(3);
	CD.insertAtTail(4);
	CD.insertAtTail(10);
	cout << "Display From Head : " << endl;
	CD.displayFromHead();
	CD.factorialofEachElement();
	CD.sort();
	CD.deleteEvenNumbers();
	cout << "Display From Head : " << endl;
	CD.displayFromHead();

	return 0;
}