#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    // cout<<st.top();
    
    // st.pop();
    
    // cout<<st.top();
    
//displaying all elements of stack    
   while(st.size()>0){
        cout<<st.top();
        cout<<endl;
        st.pop();
    }
    
    
}