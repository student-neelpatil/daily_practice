#include <iostream>
using namespace std;


string convertTo(string s){
    
    bool newword=true;
    
    for(int i=0;i<s.size();i++){
        
        if(isspace(s[i])){
            newword=true;
        }
        
        else{
            
            if(newword){
                
                s[i]=toupper(s[i]);
                newword=false;
            }else{
                
                s[i]=tolower(s[i]);
            }
        }
      
    }
      return s;
}



int main() {
	string str=convertTo("hello world");
	
	cout<<str;

    return 0;

}
