//vector
#include<iostream>
#include<vector>
using namespace std;

class Queue{
    public:
    int f;
    int b;
    int capacity;

    vector<int>v;

    Queue(int cap){ // default capacity 100
        f=0;
        b=0;
        capacity = cap;
        v.resize(capacity); // initialize vector with size
    }

    void push(int val){
       if(size()==capacity){
        cout<<"queue is full"<<endl;
        return;
       }
       v[b]=val; 
       b++;
   }

   void pop(){
    if(empty()){
        cout<<"queue is empty"<<endl;
        return;
    }
    f++;
   }

   int size(){
    return b-f;
   }

   int front(){
    if(empty()){
        cout<<"queue is empty"<<endl;
        return -1;
    }
    return v[f];
   }

   bool empty(){
    return (size()==0);
   }

   void display(){
    if(empty()){
        cout<<"queue is empty"<<endl;
        return;
    }
    for(int i=f;i<b;i++){
        cout<<v[i]<<endl;
    }
   }
   
};

int main(){
    Queue q(100); // initialize with capacity 10

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.pop();
    cout<<"After pop:"<<endl;
    q.display();

    cout<<"Front: "<<q.front()<<endl;
    cout<<"Size: "<<q.size()<<endl;
}


//array

#include<iostream>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int capacity;

    public:
    Queue() {
        capacity = 5;
        arr = new int[capacity]; // directly giving size
        front = 0;
        rear = 0;
    }

    void push(int val) {
        if (rear == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = val;
        rear++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }

    int size() {
        return rear - front;
    }

    int getFront() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        return rear == front;
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i < rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr; // free memory
    }
};

int main() {
    Queue q; // size is directly given here

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();

    q.push(60); // will show "Queue is full"

    q.pop();
    cout << "After pop:" << endl;
    q.display();

    cout << "Front: " << q.getFront() << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}
