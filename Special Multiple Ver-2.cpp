#include <iostream>
using namespace std;

// Function to find the smallest multiple of n composed only of the digits 9 and 0
long nine_zero(int n) {
    // Start iterating from 1 to find the smallest multiple
    for (int i = 1; ; ++i) {
        long multiple = 0;
        long chiffre = 9;
        // Construct the multiple using bitwise operations and shifting
        for (int j = i; j != 0; j = j >> 1) {
            if (j & 1) multiple += chiffre; // Add 9 if j's corresponding bit is set
            chiffre *= 10; // Multiply by 10 to shift digits to the left
        }

        // Check if the constructed multiple is divisible by n
        if (multiple % n == 0) return multiple; // Return the multiple if divisible
    }
}

int main() {
    int t, n;
    
    // Read the number of test cases
    cin >> t;
    // Iterate over each test case
    while (t--) {
        // Read the integer n for the current test case
        cin >> n;
        // Call the function to find the smallest multiple of n
        // composed only of the digits 9 and 0, then print the result
        cout << nine_zero(n) << endl;
    }

    return 0;
}
