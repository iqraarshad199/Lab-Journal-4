//include "LinkedList.h"
//
//
//#include<iostream>
//using namespace std;
//int main() {
//
//	cout << "\n\t===========================Lab Journal 4=======================" << endl;
//	LinkedList l;
//
//	cout << "\n\tLnked list is:";
//	l.insertstart(5);
//	l.insertstart(4);
//	l.insertstart(3);
//	l.insertstart(2);
//	l.insertstart(1);
//
//	l.traverse();
//
//	cout<< "\n\n\tList after insertion at arbitrary position is: ";
//	l.insertafter(2, 3);
//	l.traverse();
//
//	cout << "\n\n\tList after insertion at end is: ";
//	l.insertend(6);
//	l.traverse();
//
//	cout << "\n\n\tList list after deleting the node is:";
//	l.deletenode(3);
//	l.traverse();
//	cout << "\n\n\tList list after deletion at beginning is:";
//	l.deletebegin();
//	l.traverse();
//
//	cout << "\n\n\tList list after deletion at end is:";
//	l.deleteend();
//	l.traverse();
//
//	cout << endl;
//	cout << "\n\t=============================================================" << endl;
//}

#include <iostream>

#include "Clist.h"
using namespace std;

int main() {
    cout << "\n\t===========================Lab Journal 4=======================" << endl;
    Clist c;

    // Inserting nodes at the end of the list
    c.insertend(1);
    c.insertend(2);
    c.insertend(3);

    // Traverse the list
    cout << "\n\tCircular List after inserting at end: ";
    c.traverse();

    // Inserting at the beginning of the list
    c.insertstart(5);
    cout << "\n\tCircular List after inserting at beginning: ";
    c.traverse();


    cout << "\n\tCircular List after inserting at arbitrary position is: ";
    c.insertafter(1,2);
    c.traverse();

    // Delete the first node
    c.deletebegin();
    cout << "\n\tCircular List after deletion at beginning is: ";
    c.traverse();

    cout << "\n\tCircular List Deleting node with value 2 at position 3: ";
    c.deletenode(2,3);
    c.traverse();

    // Delete the last node
    c.deleteend();
    cout << "\n\tCircular List after deletion at end is: ";
    c.traverse();

    cout << "\n\t=============================================================" << endl;
    return 0;
}