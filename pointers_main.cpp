#include <iostream>
#include <cstring>

#include "Log.h"
#include "pointers.h"

int main_func()
{
    /// Exercise 1
    int a = 2, b = 4;
    Swap(&a, &b);
    std::cout << a << " " << b << " " << std::endl;
    std::cout << std::endl;

    /// Exercise 2
    int n = 10, m = 10;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = -i * i + 2 * i + 10;
        /// std::cout << arr[i] << ", ";
    }
    std::cout << MaxValue(arr, n) << std::endl;
    std::cout << std::endl;

    /// Exercise 3
    Print(arr, n);
    std::cout << std::endl;

    /// Exercise 4
    Swap2(a, b);
    std::cout << a << " " << b << " " << std::endl;
    std::cout << std::endl;

    /// Exercise 5
    a = 5;
    Increment(a);
    std::cout << a << std::endl;
    std::cout << std::endl;

    /// Exercise 6
    Reverse(arr, n);
    Print(arr, n);
    std::cout << std::endl;

    /// Exercise 7
    std::cout << SecondLargest(arr, n) << std::endl;
    std::cout << std::endl;

    /// Exercise 8
    std::cout << MyStrlen("Hello, world!") << std::endl;
    std::cout << std::endl;

    /// Exercise 9
    n = 2, m = 10;
    int** matrix = CreateMatrix(n, m);
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = counter++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    /// Exercise 10
    a = 5, b = 10;
    int* ptr = &a;
    *ptr = 4;
    std::cout << a << " " << b << " " << std::endl;
    Change(&ptr, b);
    *ptr = 7;
    std::cout << a << " " << b << " " << std::endl;
    std::cout << std::endl;

    /// Exercise 11
    n = 10;
    int& refe = MinValue(arr, n);
    // std::cout << refe << std::endl;
    refe = 20;
    Print(arr, n);

    std::cin.get();

    return 0;
}


