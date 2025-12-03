#include<iostream>
#include<stack>
using namespace std;


void Reverse_string(string str){

   stack<char>s;
   stack<char>rev;

    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
 
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
   
    string str="Neel";

    Reverse_string(str);
}