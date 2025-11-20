#include<iostream>
#include<set>
using namespace std;


// int main(){
//     //to check given element is exist in or not

//     set<int>s;

//     s.insert({29,40,5,24,35,57,46,48});

//     // auto number=s.find(20); //s.find() return a iterator
     
//     //1)using .find() method
//     // if(s.find(30) !=s.end()){
//     //     cout<<"number is found";
//     // }else{
//     //     cout<<"number not found";
//     // }


//     //2)using .count() method because each element is unique so genrally count should mot grater than 1 and if element is not present then count is 0
    
//     int count=s.count(30);

//     if(count==0){
//          cout<<"element is not present";
//     }else{
//         cout<<"element is present";
//     }
// }


//using normal for loop
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s = {29, 40, 5, 24, 35, 57, 46, 48};

//     int key = 40;   // element to search
//     bool found = false;

//     for (int ele : s) {
//         if (ele == key) {
//             found = true;
//             break; // stop loop as soon as we find the element
//         }
//     }

//     if (found)
//         cout << "Element " << key << " is found." << endl;
//     else
//         cout << "Element " << key << " is not found." << endl;

//     return 0;
// }


//size of set

int size(set<int>s){
    int size;
    int count=0;
    
    for(int ele:s){
        count++;
    }

    size=count;

   return size;
}


int main(){
   set<int>s={30,24,35,12,36,34,60,23};

   int sz=size(s);

   cout<<"size is:"<<sz;
}