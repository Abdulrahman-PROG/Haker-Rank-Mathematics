#include <iostream>
#include <vector>

using namespace std;

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
    vector<vector<int>> A = {{-2, -9}, {1, 4}};

    vector<vector<int>> result = matrixPower(A, 1000);

    cout << result[0][0] << endl; 
    cout << result[0][1] << endl; 
    cout << result[1][0] << endl; 
    cout << result[1][1] << endl; 
    return 0;
}
