#include <iostream>
using namespace std;

int main() {

    int number = 1011;
    int decimal = 0;
    int bits;
    int power = 0;

    while (number > 0) {

        bits = number % 10;          // extract last digit (0 or 1)
        decimal = decimal + bits * (1 << power);  // 2^power using bit shift
        power++;
        number = number / 10;
    }

    cout << decimal;

    return 0;
}


//1<<power == 2^power