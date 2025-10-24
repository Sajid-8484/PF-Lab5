#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Palindrome numbers up to " << n << " are:\n";
    for (int i = 1; i <= n; i++) {
        int num = i;
        int reversed = 0;
        int original = num;
        // reverse the number
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        // check if the number is palindrome
        if (original == reversed) {
            cout << original << " ";
        }
    }
    cout << endl;
    return 0;
}