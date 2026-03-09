#include <iostream>
#include <climits>

void Swap(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int MaxValue(int* arr, int n) {
    int maximum = *arr;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > maximum) {
            maximum = *(arr + i);
        }
    }
    return maximum;
}
void Print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *arr << " ";
        arr++;
    }
    std::cout << std::endl;
}
void Swap2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void Increment(int& value) {
    value++;
}
void Reverse(int* a, int n) {
    int* left = a;
    int* right = a + n - 1;

    while (left < right) {
        Swap(left, right);
        left++, right--;
    }
}
int SecondLargest(int* arr, int n) {
    int maximum = INT_MIN;
    int answer = -1;
    for (int i = 0; i < n; i++) {
        if (*arr == maximum) {
            arr++;
            continue;
        }
        if (answer < *arr) {
            answer = *arr;
        }
        arr++;
    }
    return answer;
}
int MyStrlen(const char* str) {
    int answer = 0;
    while (*str != '\0') {
        answer++;
        str++;
    }
    return answer;
}
int** CreateMatrix(int n, int m) {
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        *(matrix + i) = new int[m];
    }
    return matrix;
}
void Change(int** ptr, int& to) {
    *ptr = &to;
}
int& MinValue(int* arr, int n) {
    int* ptr = nullptr;
    int answer = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (answer > *arr) {
            answer = *arr;
            ptr = arr;
        }
        arr++;
    }
    return *ptr;
}

