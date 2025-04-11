#include<iostream>
#include<algorithm>

using namespace std;

void printArr(int* arr, int n) {
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';
}

void selection_sort(int* arr, int n) {
    // TC -> O(n^2)
    // SC -> O(1)

    for(int i = 0; i < n; i++) {
        int min_index = i;

        for(int j = i+1; j < n; j++) {
            min_index = (arr[j] < arr[min_index]) ? j : min_index;
        }

        std::swap(arr[i], arr[min_index]);
    }
}

void insertion_sort(int* arr, int n) {
    // TC -> O(n^2)
    // SC -> O(1)

    for(int i = 0; i < n; i++) {
        int j = i+1;

        while(j >= 1 && arr[j-1] >= arr[j]) {
            std::swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

void bubble_sort(int* arr, int n) {
    // TC -> O(n^2)
    // SC -> O(1)

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

void optimized_bubble_sort(int* arr, int n) {
    // TC -> O(n^2)
    // SC -> O(1)

    for (int i = 0; i < n-1; i++) {
        bool swapped = false;

        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

int main() {
    int arr[] = { 5, 3, 4, 1, 2 };
    int n = 5;

    cout << "Before sorting: ";
    printArr(arr, n);

    insertion_sort(arr, n);

    cout << "After sorting: ";
    printArr(arr, n);

    return 0;
}