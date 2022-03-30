#include<iostream>
using namespace std;

void printArray(int arr[], int i, int n){
    if(i==n){
        return;
    }
    cout << arr[i] << " ";
    printArray(arr+i, i+1, n);
}

int main() {
    int n;
    // cout << "Input the number of elements to be stored in the array : ";
    // cin >> n;

    n=5;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int i=0;
    printArray(arr, i, n);

    return 0;
}