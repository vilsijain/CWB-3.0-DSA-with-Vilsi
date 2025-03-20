#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right){
    int x = mid - left + 1;
    int z = right - mid;
    
    // Temporary arrays
    vector<int> Lef(x), Ri(z);
    
    for(int i = 0; i < x; i++)
        Lef[i] = arr[left + i];
    for(int j = 0; j < z; j++)
        Ri[j] = arr[mid + 1 + j];
    
    int i = 0, j = 0;
    int k = left;
    
    while(i < x && j < z){
        if(Lef[i] <= Ri[j]){
            arr[k] = Lef[i];
            i++;
        } else {
            arr[k] = Ri[j];
            j++;
        }
        k++;
    }
    // Left elements
    while(i < x){
        arr[k] = Lef[i];
        i++;
        k++;
    }
    // Right elements
    while(j < z){
        arr[k] = Ri[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right){
    if(left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void printVector(vector<int>& arr){
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {4, 6, 4, 7, 4, 98, 6};
    int n = arr.size();
    cout << "Array: ";
    printVector(arr);
    mergeSort(arr, 0, n - 1);
    cout << "Sorted Array: ";
    printVector(arr);
    return 0;
}
//Time Complexity - O(n log n)
