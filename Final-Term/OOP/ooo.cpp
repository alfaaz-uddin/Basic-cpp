#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // Pointer ptr points to the first element of arr

    std::cout << "Array elements: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << *(ptr + i) << " "; // Output each element of arr using pointer
    }


    return 0;
}
