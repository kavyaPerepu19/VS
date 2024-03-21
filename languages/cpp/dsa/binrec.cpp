#include <iostream>
#include <vector>

using namespace std;


int binarySearchRecursive(const vector<int>& arr, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  
        } else if (arr[mid] > target) {
            return binarySearchRecursive(arr, low, mid - 1, target);  
        } else {
            return binarySearchRecursive(arr, mid + 1, high, target);  
        }
    }

    return -1;  
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    int result = binarySearchRecursive(arr, 0, arr.size() - 1, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
