#include <iostream>
#include <vector>

using namespace std;

// Partition function to partition the array into two halves
// and return the index of the pivot element
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;       // Index of the smaller element

    for (int j = low; j < high; ++j) {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            ++i; // Increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    // Swap the pivot element with the element at the (i + 1) position
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the partitioning index
}

// Recursive function to perform Quicksort on the array
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array into two halves and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after the pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
