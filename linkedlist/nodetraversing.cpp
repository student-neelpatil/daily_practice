
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

class Node{
    public:
    int val;
    Node*next;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
 void display(Node*head){
     Node*temp=head;
     
     while(temp!=NULL){
         cout<<temp->val;
         temp=temp->next;
         
     }
     
     
 }

int main()
{
    //using node pointer object
    
    Node*a=new Node(10);//dynamic allocation
    Node*b=new Node(20);
    Node*c=new Node(30);
    
    a->next=b;
    b->next=c;
    
    display(a);
   
    return 0;
}

//size of linked list


// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

class Node{
    public:
    int val;
    Node*next;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
 void display(Node*head){
     Node*temp=head;
     
     while(temp!=NULL){
         cout<<temp->val;
         temp=temp->next;
         
     }
     
     
 }
 
 int size(Node*head){
     Node*temp=head;
     int n=0;
     while(temp!=NULL){
         n++;
         temp=temp->next;
     }
    return n; 
 }

int main()
{
    //using node pointer object
    
    Node*a=new Node(10);//dynamic allocation
    Node*b=new Node(20);
    Node*c=new Node(30);
    
    a->next=b;
    b->next=c;
    
    cout<<size(a);
    return 0;
}
