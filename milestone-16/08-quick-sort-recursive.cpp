#include <iostream>
using namespace std;

// partion algorithm
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

// quick sort algorithm
void sortArray(int arr[], int low, int high) {
    if(low<high){
        int pi = partition(arr, low, high);     // pi is the index of the pivot, now at right place
        sortArray(arr, low, pi-1);
        sortArray(arr, pi+1, high);
    }
}

int main() {
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr,0,n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}