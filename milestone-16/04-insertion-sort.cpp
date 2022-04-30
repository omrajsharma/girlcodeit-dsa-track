#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                for(int k=i; k>j+1; k--){
                    arr[k] = arr[k-1];
                }
                arr[j+1] = temp;
            }
        }
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}