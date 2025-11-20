
#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>&arr,int val){
     arr.push_back(val);
}

int top(vector<int>&arr){
    int n=arr.size();
    return arr[n-1];
}

void remove(vector<int>&arr){
    arr.pop_back();
    
}

int main(){
    vector<int>v={10,20,30,40};
   
   insert(v,50);
   
   for(int i=0;i<5;i++){
       cout<<v[i]<<endl;
   }
   
   cout<<"top element is :-"<<top(v)<<endl;
    
   remove(v);
   
    for(int i=0;i<5;i++){
       cout<<v[i]<<endl;
   }
   
    
    
}