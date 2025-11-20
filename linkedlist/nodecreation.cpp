
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
//node creation
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

int main()
{
    Node a(10);
    Node b(20);
    
    a.next=&b;//node linking
    
    cout<<b.val;
    cout<<endl;
    cout<<(*(a.next)).val;
    //or
    cout<<endl;
    cout<<(a.next)->val;
    return 0;

    //(*). is same as (->)
}



// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

//using node pointer object

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

int main()
{
    //using node pointer object
    
    Node*a=new Node(10);//dynamic allocation
    Node*b=new Node(20);
    
   cout<< (*a).val;//10
    
   cout<<endl;    
   cout<<(*a).next;  //0 because it is null;
   
//   (*a).next=b;//connecting link
   // or
    a->next=b;
    
    cout<<(*(a->next)).val;
    cout<<endl;
     cout<<a->next->val;
   
    return 0;
}
