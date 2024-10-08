//#include <iostream>
//using namespace std;
//
//struct Node {
//    char data;
//    Node* next;
//
//    Node(char val){
//        data = val;
//        next = nullptr; 
//    }
//};
//
//class CircularList {
//public:
//    Node* head;
//
//    CircularList() {
//        head=NULL;
//    }
//
//    void insertEnd(char val) {
//        Node* newNode = new Node(val);
//        if (head == NULL) {
//            head = newNode;
//            head->next = head; // Points to itself, making it circular
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != head) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//            newNode->next = head; // Circular link
//        }
//    }
//
//    void display() {
//        if (head == nullptr) 
//            return;
//        Node* temp = head;
//        do {
//            cout << temp->data;
//            temp = temp->next;
//        } while (temp != head);
//        cout << endl;
//    }
//
//    // Function to merge another circular linked list into this list
//    void merge(CircularList& other) {
//        if (head == nullptr) {
//            head = other.head;
//            return;
//        }
//        if (other.head == nullptr) {
//            return;
//        }
//
//        // Find the last node of the current list
//        Node* last1 = head;
//        while (last1->next != head) {
//            last1 = last1->next;
//        }
//
//        // Find the last node of the other list
//        Node* last2 = other.head;
//        while (last2->next != other.head) {
//            last2 = last2->next;
//        }
//
//        // Merge the two lists
//        last1->next = other.head; // Link end of list1 to head of list2
//        last2->next = head;       // Link end of list2 to head of list1
//    }
//};
//
//int main() {
//
//    cout << "\n\t===========================Lab Journal 4=======================" << endl;
//    CircularList list1;
//    list1.insertEnd('P');
//    list1.insertEnd('O');
//    list1.insertEnd('W');
//    list1.insertEnd('E');
//    list1.insertEnd('R');
//
//    CircularList list2;
//    list2.insertEnd('P');
//    list2.insertEnd('O');
//    list2.insertEnd('I');
//    list2.insertEnd('N');
//    list2.insertEnd('T');
//
//    // Merging the two lists
//    list1.merge(list2);
//
//    // Display the merged list
//    cout << "\n\tMerged Circular Linked List: ";
//    list1.display();  // Expected output: POWERPOINT
//
//    cout << "\n\t=============================================================" << endl;
//    return 0;
//}
