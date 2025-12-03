#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int top = st.top();
    st.pop();

    pushAtBottom(st, x);

    st.push(top);

}

int main(){
 stack<int>s;

 s.push(3);
 s.push(2);
 s.push(1);

 pushAtBottom(s,4);

 
}