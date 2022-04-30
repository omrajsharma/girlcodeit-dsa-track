#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Algorithm
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}