#include <iostream>
using namespace std;

int main() {
     int rows = 2;
     int cols = 2;

    int matrix1[rows][cols] = {{1, 2}, {3, 4}}; // Example values
    int matrix2[rows][cols] = {{5, 6}, {7, 8}}; // Example values
    int result[rows][cols];

    // Add corresponding elements of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

