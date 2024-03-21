#include <iostream>
using namespace std;

int Last(int arr[],int target, int curr) {
    if (curr < 0) {
        return -1;
    }
    if (arr[curr] == target) {
        return curr;
    }
    return Last(arr, target, curr - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int l = Last(arr, target, size - 1);

    if (l != -1) {
        cout <<  l << endl;
    
    return 0;
}
}
