#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    if (n <= 1) {
        return;
    }
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);
}

int main(){
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}