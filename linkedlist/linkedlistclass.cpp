#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist() {
        head = NULL;
        tail = NULL;
        size = 0; // initialize size
    }

    void insertathead(int val) {
        Node* t = new Node(val); // create a new node using dynamic object allocation

        if (size < 0) {
            cout << "invalid linkedlist";
        }
        if (size == 0) {
            head = t;
            tail = t; // set tail also when first node is inserted
        }
        else {
            t->next = head;
            head = t;
        }

        size++;
    }
    void insertattail(int val){
        Node* t = new Node(val); // create a new node
       
        
        if (size < 0) {
            cout << "invalid linkedlist";
        }
        if (size == 0) {
            head = t;
            tail = t; // set tail also when first node is inserted
        }
        else{
             Node*temp=head;
            
            while(temp->next!=NULL){
                temp=temp->next;
            }
           temp->next=t;
           t->next=NULL;
           
            
        }
        
        size++;
        
    }
    
   void insertatindex(int idx, int val) {
    if (idx < 0 || idx > size) {
        cout << "Invalid index" << endl;
        return;
    }

    if (idx == 0) {
        insertathead(val);
        return;
    }
    if (idx == size) {
        insertattail(val);
        return;
    }

    Node* t = new Node(val);
    Node* temp = head;

    // Traverse to (idx-1)th node
    for (int i = 0; i < idx - 1; i++) {
        temp = temp->next;
    }

    // Insert t after temp
    t->next = temp->next;
    temp->next = t;

    size++;
}

  void deleteathead(){
      if(size<0){
          cout<<"invalid linkedkist";
      }
      if(size==0){
          cout<<"no node to delete";
      }
      else{
          head=head->next;
          
          
      }
      size--;
  }
  
  void deleteattail() {
    if (size == 0) {
        cout << "No node to delete" << endl;
        return;
    }

    if (size == 1) {
    
        head = NULL;
        tail = NULL;
    }
    else {
        Node* temp = head;
        // Traverse to second last node
        while (temp->next != tail) {
            temp = temp->next;
        }
        
        tail = temp;
        tail->next = NULL;
    }

    size--;
}


    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val<< "-> ";
            temp = temp->next;
        }
        cout<<"NULL";
        cout << endl;
    }
};

int main() {
    Linkedlist ll;
    ll.insertathead(10);
    ll.insertathead(20);
    ll.insertathead(30);
    ll.insertathead(40);
    ll.display();
    ll.insertathead(50);
    ll.display();
    ll.insertattail(5);
    ll.display();
    ll.insertatindex(3,70);
    ll.display();
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    return 0;
}
