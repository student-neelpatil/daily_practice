#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> nextgreater(vector<int>arr){
    int n=arr.size();
    vector<int>ans(n);
    stack<int>st;

    for(int i=n-1;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }

    return ans;
}

int main(){
    vector<int>arr={6,8,0,1,3};
    vector<int>answer=nextgreater(arr);

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ,";
    }
}

//output- 8 ,-1 ,1 ,3 ,-1

