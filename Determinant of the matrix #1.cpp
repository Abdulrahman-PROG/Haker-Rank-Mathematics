#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

#include <cmath>

double determinant(int** a, int n) {
    double det = 1.0;
    for (int i = 0; i < n; i++) {
        // Find pivot row
        int pivot = i;
        for (int j = i + 1; j < n; j++) {
            if (abs(a[j][i]) > abs(a[pivot][i])) {
                pivot = j;
            }
        }

        // Swap rows if necessary
        if (pivot != i) {
            // Swap pointers to rows
            int* temp = a[i];
            a[i] = a[pivot];
            a[pivot] = temp;
            det *= -1; // Change sign of determinant
        }

        // Check for zero diagonal element
        if (a[i][i] == 0) {
            return 0; // If diagonal element is 0, determinant is 0
        }

        // Multiply determinant by pivot element
        det *= a[i][i];

        // Perform row operations to eliminate lower triangular elements
        for (int j = i + 1; j < n; j++) {
            double factor = a[j][i] / static_cast<double>(a[i][i]);
            for (int k = i + 1; k < n; k++) {
                a[j][k] -= static_cast<int>(factor * a[i][k]);
            }
        }
    }
    return det;
}



int main() {
    int arr[5][5] = {{3,0,0,-2,4},
                    {0,2,0,0,0},
                    {0,-1,0,5,-3},
                    {-4,0,1,0,6},
                    {0,-1,0,3,2}};

    cout<<determinant((int**)arr,5);
    
    return 0;
}
