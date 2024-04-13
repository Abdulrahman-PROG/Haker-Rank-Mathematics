#include <bits/stdc++.h>
#include <cstdlib> // For atoi
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

class Solution {
public:
    int solve(int cipher) {
        int N = cipher;
        int x = 1;
        while (true) {
            string binary = to_binary(x);
            string nine_ary = replace_digits(binary, '1', '9');
            int dec = atoi(nine_ary.c_str()); // Convert string to integer
            if (dec % N == 0) {
                return dec;
            }
            x += 1;
        }
    }

private:
    string to_binary(int x) {
        string binary = "";
        while (x > 0) {
            binary = (x % 2 == 0 ? "0" : "1") + binary;
            x /= 2;
        }
        return binary;
    }

    string replace_digits(string str, char from, char to) {
        for (size_t i = 0; i < str.length(); ++i) {
            if (str[i] == from) {
                str[i] = to;
            }
        }
        return str;
    }
};

int main() {
    FAST;
    Solution solution;
    int T;
    cin >> T; // Read the number of test cases
    for (int i = 0; i < T; ++i) {
        int cipher;
        cin >> cipher; // Read the value of N
        cout << solution.solve(cipher) << e; // Print the solution
    }
    return 0;
}
