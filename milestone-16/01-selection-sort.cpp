#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}