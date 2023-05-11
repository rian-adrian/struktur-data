#include <iostream>
#include "linklist.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Linkedlist list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(50);
	
	cout << "head : " << list1.head->value << endl;
	cout << "tail : " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printAll();
	
	Linkedlist list2;
	list2.insertToHead(24);
	list2.insertToHead(30);
	
	list2.printAll();
	
		
	return 0;
}
