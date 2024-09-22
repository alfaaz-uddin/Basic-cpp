#include <iostream>
using namespace std;
int main()
{

/*const int ROWS = 2;
const int COLS = 4;*/

void findMinMaxAndMultiply(float arr[ROWS][COLS]) {
    // Finding the largest element in the first row
    float maxFirstRow = arr[0][0];
    for (int j = 1; j < COLS; ++j) {
        if (arr[0][j] > maxFirstRow) {
            maxFirstRow = arr[0][j];
        }
    }

    // Finding the smallest element in the second row
    float minSecondRow = arr[1][0];
    for (int j = 1; j < COLS; ++j) {
        if (arr[1][j] < minSecondRow) {
            minSecondRow = arr[1][j];
        }
    }

    // Multiplying the largest from the first row and smallest from the second row
    float result = maxFirstRow * minSecondRow;

    // Displaying results
    std::cout << "Largest element in the first row: " << maxFirstRow << std::endl;
    std::cout << "Smallest element in the second row: " << minSecondRow << std::endl;
    std::cout << "Result of multiplication: " << result << std::endl;
}

int main() {
    float arr[ROWS][COLS];

    // Input values into the 2D array
    std::cout << "Enter 8 floating point numbers for the 2x4 array:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cin >> arr[i][j];
        }
    }

    // Call the function to find, display, and multiply
    findMinMaxAndMultiply(arr);

    return 0;
}

