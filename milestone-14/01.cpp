// Sort An array using Recursion

#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> & arr, int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }

    int val = arr[arr.size()-1];
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(val);
}

void sortRecur(vector<int> & arr){
    if(arr.size() == 1){
        return;
    }

    int temp = arr[arr.size()-1];
    arr.pop_back();
    sortRecur(arr);
    insert(arr, temp);
}

int main() {
    vector<int> arr = {4,3,5,1,2,45,32,57,32,67,12};
    sortRecur(arr);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}