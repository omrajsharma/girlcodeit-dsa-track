// Merge sort algorithm

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    i = 0;  // index of first subarray
    j = 0;  // index of second subarray
    k = l;  // index of merged subarray

    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void sortArray(int arr[],int begin, int end){
    if(begin>=end){
        return;
    }

    int mid = begin + (end-begin)/2;
    sortArray(arr,begin,mid);
    sortArray(arr,mid+1,end);
    merge(arr, begin, mid, end);
}

int main() {
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, 0, n-1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}