#include <iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1;
    }
    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
