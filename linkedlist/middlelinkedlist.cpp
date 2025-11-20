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
      int middleNode() {
        int length = 0;
        ListNode* temp = head;

        // Calculate length
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        int mididx = length / 2;  // works for both odd and even

        // Move to middle node
        ListNode* mid = head;
        for (int i = 0; i < mididx; i++) {
            mid = mid->next;
        }

        return mid->val;
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

    cout<<ll.middleNode();
    

    return 0;
}
