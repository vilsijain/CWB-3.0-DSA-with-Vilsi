// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr){
    int n=arr.size();
    bool swapped;
    
    for(int i =0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    }
    if(!swapped)
    break;
}
}
void printVector(const vector<int>& arr){
    for(int num : arr)
    cout<<" "<<num;
}
int main() {
    vector<int>arr = {5,6 ,3 };
    bubbleSort(arr);
    cout<<"Sorted bubble:\n";
    printVector(arr);
    return 0;
}
