#include <iostream>
using namespace std;
void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void printMatrix(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int r1, c1, r2, c2;

    cout << "Enter the number of rows for matrix 1: ";
    cin >> r1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> c1;

    cout << "Enter the number of rows for matrix 2: ";
    cin >> r2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> c2;
    if (c1 != r2) {
        cout << "Matrices cannot be multiplied." << endl;
        return 1;
    }
    int mat1[10][10], mat2[10][10], res[10][10];
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }
    multiplyMatrices(mat1, mat2, res, r1, c1, r2, c2);

    cout << "Matrix 1:" << endl;
    printMatrix(mat1, r1, c1);

    cout << "Matrix 2:" << endl;
    printMatrix(mat2, r2, c2);

    cout << "Resultant Matrix:" << endl;
    printMatrix(res, r1, c2);

    return 0;
}