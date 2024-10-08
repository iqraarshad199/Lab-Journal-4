#pragma once

#include "Node.h"
#include<iostream>

class LinkedList
{
private:
	Node* head;
public:

	LinkedList();
	bool isEmpty();

	/*@ Function that checks if list is empty or not
*/
	void insertstart(int val);

	/*@ Function that insert node at the start.
	  @val will store the value
	*/

	void insertafter(int oldV, int newV);

	/*@ Function that insert node at the arbitrary position.
	  @val will store the value
	*/
	void insertend(int val);

	/*@ Function that insert node at the end.
	  @val will store the value
	*/

	void deletenode(int value);

	/*
	@delete a node from the specific position that you entered.
	@temp2 will store the address of temp->next
	*/

	void deletebegin();

	/*@ Function that delete node from the start.
	  @temp: temp wil store the address
	  @head->next will point to the address of next of head->next
	*/
	void deleteend();

	/*
	  @Function that delete node from the end.
	  @prev: prev will take the address of temp and will delete the node from the end
	*/

	void traverse();

	/*
	  @Function that print the values in the list.
	
	*/

	~LinkedList();
};

