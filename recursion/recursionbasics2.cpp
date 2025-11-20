//return type example
// n to 1
#include <iostream>
using namespace std;


int display(int n){
  if(n==0)return NULL;
  
  cout<<n;
  cout<<endl;
  return display(n-1);
}

int main() 
{
   display(8);
}

// 1 to n

#include <iostream>
using namespace std;

int display(int n) {
    if (n == 0) {
        return 1; // return 1 to stop recursion, not 0
    }

    display(n - 1); // recursive call
    cout << n << endl;

    return n; // return current number (or just return anything except 0)
}

int main() {
    display(8); // don't use cout here
    return 0;
}
