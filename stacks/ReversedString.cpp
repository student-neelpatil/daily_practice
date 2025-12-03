#include<iostream>
#include<stack>
using namespace std;


void Reverse_string(stack<char>&s){
   stack<char>rev;

   while(!s.empty()){
     char topele= s.top();
     s.pop();
     rev.push(topele);
   }

   while(!rev.empty()){
     char topele= rev.top();
     rev.pop();
     s.push(topele);
   }
}

int main(){
    stack<char>st;
   
    string str="Neel";

    for(int i=0;i<str.size();i++){
        st.push(str[i]);
    }
 

    Reverse_string(st);
}