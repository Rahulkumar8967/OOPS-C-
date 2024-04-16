#include <iostream>
using namespace std;

class Matrix {
private:
    int **matrix;
    int rows;
    int cols;

public:
    // Constructor
    Matrix(int r, int c) {
     rows = r;
      cols = c; 
        // Dynamic memory allocation
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix() {
        // Release memory
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter the matrix elements:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display matrix elements
    void displayMatrix() {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
   

    // Create a Matrix object
    Matrix matrixObj(3,3);

    // Input matrix elements using the class function
    matrixObj.inputMatrix();

    // Display matrix elements using the class function
    matrixObj.displayMatrix();

    return 0;
}

