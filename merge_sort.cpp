#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    int i = start;
    int j = mid+1;

    vector<int> temp(end-start+1);
    int k = 0;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= end) {
        temp[k++] = arr[j++];
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[i+start] = temp[i];
    }
}

void merge_sort(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int mid = (start + end) / 2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = { 5, 3, 2, 4, 1 };

    cout << "Before sorting: ";
    for (int i : arr) cout << i << ' ';
    cout << '\n';

    merge_sort(arr, 0, arr.size()-1);

    cout << "After sorting: ";
    for (int i : arr) cout << i << ' ';
    cout << '\n';

    return 0;
}