// #include <iostream>
// #include<queue>
// using namespace std;

// void display(queue<int>q){
  
//   int n=q.size();
  
//   for(int i=1;i<=n;i++){
//     int x=q.front();
//     cout<<x<<endl;
//     q.pop();
   
//     q.push(x);
//   }
// }

// int main() 
// {
//     queue<int>q;
    
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     display(q);
//     q.pop();
//     display(q);
//     cout<<endl;
//     cout<<q.front();
//     cout<<q.size();
//     cout<<q.empty();
//     return 0;
    
    
    
    
// }


//reversing the queue using stack
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int>& q) {
    stack<int> st;

    // pushing elements to stack
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // pushing elements back from stack to queue
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}

void display(queue<int> q) { // pass by value is fine for display
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Original Queue:" << endl;
    display(q);

    reverse(q);

    cout << "Reversed Queue:" << endl;
    display(q);

    return 0;
}


//dispalying element at even indices only

#include <iostream>
#include <queue>
using namespace std;

void deleteAtEvenIndices(queue<int> &q) {
    int n = q.size();
    int i = 0;

    queue<int> temp;

    while (i < n) {
        int x = q.front();
        q.pop();
        if (i % 2 != 0) { // keep only odd indices
            temp.push(x);
        }
        i++;
    }

    q = temp; // assign back to original queue
}

void display(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Original Queue: ";
    display(q);

    deleteAtEvenIndices(q);

    cout << "After deleting elements at even indices: ";
    display(q);

    return 0;
}
