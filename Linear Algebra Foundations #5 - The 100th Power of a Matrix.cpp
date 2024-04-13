#include <bits/stdc++.h>
using namespace std;
#define e "\n"
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>> matrixMultiply(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    int m = B[0].size();
    vector<vector<int>> result(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < B.size(); ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return result;
}

vector<vector<int>> matrixPower(vector<vector<int>>& A, int power) {
    if (power == 1)
        return A;

    vector<vector<int>> result = matrixPower(A, power / 2);
    result = matrixMultiply(result, result);

    if (power % 2 == 1)
        result = matrixMultiply(result, A);

    return result;
}

int main() {
    FAST;
    vector<vector<int>> A = {{1, 1, 0}, {0, 1, 0}, {0, 0, 1}};

    vector<vector<int>> result = matrixPower(A, 100);

    cout << "A^100 = " << e;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << e;
    }

    return 0;
}
