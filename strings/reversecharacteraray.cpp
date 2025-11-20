#include <iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
        int n = s.size();
        vector<char> array(n);

        // Fill array with reversed values from s
        for (int i = n - 1; i >= 0; i--) {
            array[n - i - 1] = s[i];
        }

        // Print the reversed array in required format
        cout << "[";
        for (int i = 0; i < n; i++) {
            cout << "\"" << array[i] << "\"";
            if (i != n - 1) cout << ",";
        }
        cout << "]" << endl;
    }


int main() {
    vector<char>s={'h','e','l','l','o'};

    reverseString(s);
}


//using two pointers

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        // Two-pointer in-place swap
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }

        // Print in required format
        cout << "[";
        for (int i = 0; i < s.size(); ++i) {
            cout << "\"" << s[i] << "\"";
            if (i != s.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    Solution sol;
    sol.reverseString(s);
    return 0;
}
