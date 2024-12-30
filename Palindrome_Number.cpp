#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x;
        int rem;
        long rev = 0;
        while (x != 0) {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;  
        }

        return rev == original;
    }
};

int main() {
    Solution solution;

    int testCases[] = {121, -121, 10, 0};
    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTests; i++) {
        int number = testCases[i];
        bool result = solution.isPalindrome(number);
        cout << "Is " << number << " a palindrome? " << (result ? "true" : "false") << endl;
    }

    return 0;
}
