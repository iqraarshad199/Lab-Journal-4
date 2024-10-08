#include "Clist.h"
#include<iostream>
using namespace std;

#include "Clist.h"

// CircularList class constructor
Clist::Clist() {
    head = nullptr;
}

// Check if the list is empty
bool Clist::isEmpty() {
    return head == nullptr;
}

// Insert a node at the beginning of the list
void Clist::insertstart(int val) {
    Node* newnode = new Node(val);

    if (isEmpty()) {
        head = newnode;
        newnode->next = head;  
    }
    else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newnode->next = head;
        temp->next = newnode;
        head = newnode;
    }
}

void Clist::insertafter(int pre, int val) {
    if (isEmpty())
    {
        cout << "list is empty";
        exit(0);
    }
    Node*temp = head->next;
    while (temp!= NULL && temp->data != pre)
        temp = temp->next;
    if (temp == NULL)
    {
        cout << "Node not found";
        exit(0);
    }
    Node* newnode = new Node;
    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;
};


// Insert a node at the end of the list
void Clist::insertend(int val) {
    Node* newnode = new Node(val);

    if (isEmpty()) {
        head = newnode;
        newnode->next = head;
    }
    else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }
}

// Traverse and print the circular linked list
void Clist::traverse() {
    if (isEmpty()) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

// Delete the first node in the circular list
void Clist::deletebegin() {
    if (isEmpty()) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    if (head->next == head) {  // Only one node in the list
        delete head;
        head = nullptr;
    }
    else {
        Node* temp = head;
        Node* last = head;

        // Find the last node
        while (last->next != head) {
            last = last->next;
        }

        head = head->next;
        last->next = head;
        delete temp;
    }
}

void Clist::deletenode(int val, int pos) {
    if (isEmpty()) {
        cout << "List is empty." << endl;
        return;
    }

    if (pos == 1) {
        cout << "Cannot delete the first node. Please choose another position." << endl;
        return;
    }

    Node* temp = head;
    Node* prev = nullptr;

    // Find the node with the specified value
    do {
        if (temp->data == val) {
            break;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);

    // If node with value not found
    if (temp == head && head->data != val) {
        cout << "Node with value " << val << " not found." << endl;
        return;
    }

    // If node to be deleted is found and it's not the head node
    if (temp->data == val && pos != 1) {
        if (temp == head) {  // Special case where head needs to be updated
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }

            head = head->next;
            last->next = head;
            delete temp;
        }
        else {  // General case where node is not the head
            prev->next = temp->next;
            delete temp;
        }
    }
    else {
        cout << "Cannot delete node at position " << pos << "." << endl;
    }
}



// Delete the last node in the circular list
void Clist::deleteend() {
    if (isEmpty()) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }

    if (head->next == head) {  
        delete head;
        head = nullptr;
    }
    else {
        Node* temp = head;
        Node* prev = nullptr;

        // Traverse to the second last node
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head;
        delete temp;
    }
}

// Destructor to clean up memory
Clist::~Clist() {
    if (!isEmpty()) {
        Node* temp = head;
        Node* nextnode;

        do {
            nextnode = temp->next;
            delete temp;
            temp = nextnode;
        } while (temp != head);
    }
}