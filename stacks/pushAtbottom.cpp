//pushAtbottom

#include<iostream>
#include<stack>
using namespace std;

//so make stack empty first then push the element and later again push it into stack 
//so here we used another stack to store pop elements

int pushAtbottom(stack<int>&st,int value){
    
    stack<int>extra;//this is empty stack

     while(!st.empty()){
        int ele =st.top();
        st.pop();
        extra.push(ele);

     }

     st.push(value);

    while(!extra.empty()){
     int ele  = extra.top();
     extra.pop();
     st.push(ele);
    }

   return st.top();
}

int main(){
 stack<int>s;

 s.push(3);
 s.push(2);
 s.push(1);

 int ans=pushAtbottom(s,4);

 cout<<ans;
}