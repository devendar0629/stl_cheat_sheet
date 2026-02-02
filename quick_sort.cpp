#include <iostream>
#include <vector>

using namespace std;

pair<int, int> partition3Way(vector<int>& arr, int start, int end) {
    // Randomize the pivot selection in range [start, end]
    int randomPivotIndex = start + std::rand() % (end - start + 1);
    std::swap(arr[start], arr[randomPivotIndex]);

    int pivot = arr[start];
    int lt = start;
    int gt = end;
    int i = start + 1;

    while (i <= gt) {
        if (arr[i] < pivot) {
            std::swap(arr[i], arr[lt]);

            lt++;
            i++;
        } else if (arr[i] == pivot) {
            i++;
        } else {
            std::swap(arr[i], arr[gt]);
            gt--;
        }
    }

    return {lt, gt};
}

void quickSortUsing3WayPartition(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    auto [rangeStart, rangeEnd] = partition3Way(arr, start, end);

    quickSortUsing3WayPartition(arr, start, rangeStart - 1);
    quickSortUsing3WayPartition(arr, rangeEnd + 1, end);
}

int hoarePartition(vector<int>& arr, int start, int end, int pKey) {
    int left = start + 1;
    int right = end;

    while (left <= right) {
        while (left <= right && arr[left] <= pKey) {
            left++;
        }
        while (left <= right && arr[right] > pKey) {
            right--;
        }

        if (left < right) {
            std::swap(arr[left], arr[right]);
        }
    }

    std::swap(arr[start], arr[right]);

    return right;
}

void _quickSort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int pKey = arr[start];
    int pIdx = hoarePartition(arr, start, end, pKey);

    _quickSort(arr, start, pIdx - 1);
    _quickSort(arr, pIdx + 1, end);

    return;
}

void quickSort(vector<int>& arr) { _quickSort(arr, 0, arr.size() - 1); }

void printArr(vector<int>& arr) {
    for (int i : arr) cout << i << ' ';
    cout << '\n';
}

int main() {
    vector<int> arr = {5, 2, 3, 1};

    std::srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Before sorting: ";
    for (int el : arr) cout << el << ' ';
    cout << '\n';

    quickSortUsing3WayPartition(arr, 0, arr.size() - 1);

    cout << "After sorting: ";
    for (int el : arr) cout << el << ' ';
    cout << '\n';

    return 0;
}