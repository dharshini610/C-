#include <iostream>
#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> data;
public:
    Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<int>(c, 0)) {}

    void insertElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        } else {
            std::cout << "Invalid row or column index." << std::endl;
        }
    }

    int getElement(int row, int col) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        } else {
            std::cout << "Invalid row or column index." << std::endl;
            return -1; // Return -1 to indicate error
        }
    }

    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m(3, 3); // Create a 3x3 matrix

    m.insertElement(0, 0, 1);
    m.insertElement(0, 1, 2);
    m.insertElement(0, 2, 3);
    m.insertElement(1, 0, 4);
    m.insertElement(1, 1, 5);
    m.insertElement(1, 2, 6);
    
    m.insertElement(2, 0, 7);
    m.insertElement(2, 1, 8);
    m.insertElement(2, 2, 9); 

    std::cout << "Matrix:" << std::endl;
    m.displayMatrix();

    std::cout << "Element at (1, 2): " << m.getElement(1, 1) << std::endl;

    return 0;
}