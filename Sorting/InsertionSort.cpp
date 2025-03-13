// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout<<"Insertion Sort:"<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    }
int main()
{
    int arr[]={4,7,3,22,56};
    int n=sizeof(arr) / sizeof(arr[0]);
    cout<<"In Insertion Sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionsort(arr,n);
    return 0;
}

Time Complexity - O(n^2)
Space Complexity - O(1)
