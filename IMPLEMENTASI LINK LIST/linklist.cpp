#include <iostream>
#include "linklist.h"
using namespace std;

void Linkedlist::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
}
void Linkedlist::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout << tmp->value << "->";
		tmp = tmp->next;
	}
	cout << endl;
	
}
