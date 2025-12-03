#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//with using recursion use pushatbottom also

void pushAtbottom(stack<int>&st,int value){
    
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

   
}

void reverse(stack<int>&st)
{  
   if(st.empty()){
     return;
   }

    int temp=st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,temp);//not normal push but push at bottom


}



int main(){
    stack<int>s;

    vector<int>v={1,2,3,4,5};

    for(int i=0;i<5;i++){
        s.push(v[i]);
    }

    reverse(s);
}