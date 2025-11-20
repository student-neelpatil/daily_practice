#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
  //1)
    // s.insert(10);
    // s.insert(20);
    // s.insert(5);

    // for(int k:s){
    //     cout<<k<<" ";
    // }
 

    //2)insert multiple at once

      s.insert({10,20,40,5,3,0,49});

    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<"  ";
    // }
  
    // s.erase(0);
    // s.erase(s.begin(),s.find(20));//20 is not included

    // for (int i:s){
    //     cout<<i<<" ";
    // }

    // if(s.empty()){
    //    cout<<"empty";
    // }else{
    //     cout<<"not empty";
    // }
   
    // auto it=s.lower_bound(37);
     auto it=s.upper_bound(40);

    if(it!=s.end()){
        cout<<"lowerbound found"<<*it;
    }else{
        cout<<"NA";
    }

    
   return 0;
}

//if element is present then lowerbound is that element and upperbound is next greater element
//if element is not present then lowerbound and upperbound both are that number