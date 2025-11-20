#include <iostream>
using namespace std;

int main() {

    int number = 13;
    int remainder;
    string binary = "";

    while (number > 0) {

        remainder = number % 2;       
        number = number / 2;      
        
        
        // binary = char(remainder + '0') + binary;  // add digit at front
        
        //or
        
        
        binary.insert(binary.begin(), remainder + '0');

    }

    cout << binary;

    return 0;
}


// 1 + '0'='1'
// 0 + '0'='0'