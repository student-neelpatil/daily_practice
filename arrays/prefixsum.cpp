// #include <iostream>
// #include<vector>
// using namespace std;

// void prefixsum(vector<int>&arr){
//     vector<int>prefix(arr.size());
    
//     int sum=0;
    
//     for(int i=0;i<arr.size();i++){
//         sum=sum+arr[i];
//         prefix[i]=sum;
        
//     }
//    for(int j=0;j<prefix.size();j++){
//        cout<<prefix[j]<<endl;
//    }
// }

// int main() {
//      //prfixes in array
     
//      vector<int>v={1,2,3,4};
     
//      prefixsum(v);
     
     
     

     
// }
     
//odd sum only

#include <iostream>
#include <vector>
using namespace std;

void prefixsum(vector<int>& arr) {
    vector<int> prefix(arr.size());
    
    int sum = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];
        prefix[i] = sum;
    }

    // Print only odd prefix sums
    for(int j = 0; j < prefix.size(); j++) {
        if(prefix[j] % 2 != 0) {   // Check odd
            cout << prefix[j] << endl;
        }
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    prefixsum(v);
}
