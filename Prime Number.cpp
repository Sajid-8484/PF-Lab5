#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true; // assume number is prime

        for (int j = 2; j <= i / 2; j++) { // check divisibility
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
