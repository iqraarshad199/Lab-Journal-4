#include "LinkedList.h"

#include<iostream>
using namespace std;

LinkedList::LinkedList()
{
	/*@ Function that insert dummy node
*/
	head = new Node();
	head->data = 0;
	head->next = nullptr;
}

bool LinkedList::isEmpty() {

	return head->next == nullptr;
}

void LinkedList::insertstart(int val) {

	Node* newnode = new Node;
	newnode->data = val;
	if (isEmpty()) {
		head->next = newnode;
	}

	else {

		newnode->next = head->next;
		head->next = newnode;
	}
}

void LinkedList::insertafter(int oldV, int newV) {
	if (isEmpty()) {
		cout << "list is empty";
		return;
	}
	Node* newnode = new Node(newV);
	Node* temp = head;
	while (temp != NULL && temp->data != oldV) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << "Value " << oldV << " not found in the list.";
		return;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void LinkedList::insertend(int val) {

	Node* newnode = new Node;
	newnode->data = val;
	if (isEmpty()) {
		head->next = newnode;
	}
	else {
		Node* temp = head->next;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void LinkedList::deletenode(int value) {

	if (isEmpty()) {
		cout << "list is empty";
		return;
	}
	Node* temp = head;
	while (temp->next != NULL && temp->next->data != value) {
		temp = temp->next;
	}
	if (temp->next == NULL) {
		cout << "Value " << value << " not found in the list.";
		return;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
}

void LinkedList::deletebegin() {

	
	if (isEmpty()) {
		cout << "List is empty;";
	}
	Node* temp = head->next;
	head->next = head->next->next;
	delete temp;
}

void LinkedList::deleteend() {

	
	Node* temp = head->next;
	Node* prev = head;
	while (temp->next != nullptr) {
		prev = temp;
		temp = temp->next;
	}
	prev->next = nullptr;
	delete temp;
}

void LinkedList::traverse() {

	/*@ Function that will print the values.
	*/
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
LinkedList::~LinkedList()
{
}