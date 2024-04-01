// 4. Reverse Array
// Write a function that accepts an int array and the array’s size as arguments. The function
// should create a copy of the array, except that the element values should be reversed in the
// copy. The function should return a pointer to the new array. Demonstrate the function in
// a complete program.

#include <iostream>

// Function to reverse an int array and return a pointer to the reversed array
int* reverseArray(const int* originalArray, int size) {
    int* reversedArray = new int[size];  // Allocate memory for the reversed array

    // Copy and reverse elements
    for (int i = 0; i < size; ++i) {
        reversedArray[i] = originalArray[size - 1 - i];
    }

    return reversedArray;  // Return the pointer to the reversed array
}

int main() {
    // Example usage
    const int size = 5;
    int originalArray[size] = {1, 2, 3, 4, 5};

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    // Call the function to reverse the array
    int* reversedArray = reverseArray(originalArray, size);

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << reversedArray[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to free the allocated memory
    delete[] reversedArray;

    return 0;
}
