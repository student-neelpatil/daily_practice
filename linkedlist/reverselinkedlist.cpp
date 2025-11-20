#include <iostream>
using namespace std;

// Node class
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        this->val=x;
        this->next=nullptr;
    }
};



// LinkedList class to manage nodes
class LinkedList {
private:
    ListNode* head;
    ListNode* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }
      
    void reverselinkedlist(){
       ListNode*curr=head;
       ListNode*prev=nullptr;
       ListNode*next=nullptr;




       tail=head;

       while(curr!=nullptr){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }

       head=prev;
       


    }


    void insertAtTail(int val) {
        ListNode* node = new ListNode(val);
        if (head == nullptr) {
            head = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    ListNode* getHead() {
        return head;
    }

    void printList() {
        ListNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    //cout << "Original Linked List: ";
    //ll.printList();
    ll.printList();
    ll.reverselinkedlist();
    ll.printList();
    

    return 0;
}
