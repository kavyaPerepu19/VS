#include <iostream>
#include <vector>

using namespace std;


void merge(vector<int>& arr, int left, int mid, int right) {
    
    int n1 = mid - left + 1;
    int n2 = right - mid;

    
    vector<int> temp(n1 + n2);

    
    int i = left;    
    int j = mid + 1; 

   
    int k = 0;

  
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    
    for (int p = 0; p < k; ++p) {
        arr[left + p] = temp[p];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; 
        mergeSort(arr, left, mid);           
        mergeSort(arr, mid + 1, right);      
        merge(arr, left, mid, right);       
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
