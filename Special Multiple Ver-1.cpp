#include <iostream>
#include <string>
#include <cstdlib> // For atoi

class Solution {
public:
    int solve(int cipher) {
        int N = cipher;
        int x = 1;
        while (true) {
            std::string binary = to_binary(x);
            std::string nine_ary = replace_digits(binary, '1', '9');
            int dec = atoi(nine_ary.c_str()); // Convert string to integer
            if (dec % N == 0) {
                return dec;
            }
            x += 1;
        }
    }

private:
    std::string to_binary(int x) {
        std::string binary = "";
        while (x > 0) {
            binary = (x % 2 == 0 ? "0" : "1") + binary;
            x /= 2;
        }
        return binary;
    }

    std::string replace_digits(std::string str, char from, char to) {
        for (size_t i = 0; i < str.length(); ++i) {
            if (str[i] == from) {
                str[i] = to;
            }
        }
        return str;
    }
};

int main() {
    Solution solution;
    int T;
    std::cin >> T; // Read the number of test cases
    for (int i = 0; i < T; ++i) {
        int cipher;
        std::cin >> cipher; // Read the value of N
        std::cout << solution.solve(cipher) << std::endl; // Print the solution
    }
    return 0;
}
