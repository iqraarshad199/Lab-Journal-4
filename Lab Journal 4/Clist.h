#pragma once

#include "Node.h"
#include<iostream>

class Clist
{
private:
	Node* head;
public:

	Clist();
	bool isEmpty();

	/*@ Function that checks if list is empty or not
*/
	void insertstart(int val);

	/*@ Function that insert node at the start.
	  @val will store the value of the new created node.
	*/

	void insertafter(int pre, int val);

	/*@ Function that insert node at the arbitrary position.
	  @val will store the value
	*/
	void insertend(int val);

	/*@ Function that insert node at the end.
	  @val will store the value
	*/

	void deletenode(int value);

	/**
	@Function to delete a node by its value.
		@param val : The value of the node to be deleted.
		@details : Searches for the node with the specified value and deletes it.
		*/

	void deletebegin();

	/*@ Function that delete node from the start.
	  @temp: temp wil store the address
	  @details: If the list contains only one node, the list becomes empty after deletion
	*/

	void deletenode(int val, int pos);
	/*
	@delete a node from the specific position that you entered.
	@param val: The value of the node to be deleted.
    @param pos: The position of the node to be deleted (cannot be the first position).
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
	~Clist();
};
