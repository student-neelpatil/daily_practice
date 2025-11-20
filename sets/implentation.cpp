
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser
//sets dosent contain duplicate element
#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int>s;
    //inserting an value
    s.insert(10);
    s.insert(20);
    s.insert(30);
    
    //foreach loop  to display set
    
    for(int ele:s){
        cout<<ele<<endl;
    }
    
    //to remove element
    
    s.erase(20);
    
    for(int ele:s){
        cout<<ele<<endl;
    }
    
    //to find whether element is exist or not
    
    if(s.find(20)!=s.end()){
        cout<<"exists";
    }
    else{
        cout<<"not exists"<<endl;
        
    }
    //checking size of element in map
    cout<<s.size();
    
    
    
    
    
    
    return 0;
}


//duplicatew numbers


// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main()
{
    unordered_set<int>s;
    
    vector<int>vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(20);
    vec.push_back(50);
    
    int n= vec.size();
    //inserting
    for(int i=0;i<n;i++){
        s.insert(vec[i]);
    }
    //displaying element
    for(int ele:s){
        cout<<ele<<endl;
    }
    
    cout << "Size of set is: " << s.size() << endl;

    
    
    
    
    
    return 0;
}
