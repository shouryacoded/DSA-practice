#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int n){
    int i, key , j;
    for(int i = 1; i < n; i++){
        key = arr[i];
        j = i -1 ;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void DispArray(int arr[], int n){
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
        cout << endl;
}
int main(){
    // This the program to use insertion sort on an array
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    InsertionSort(arr,n);
    DispArray(arr,n);
    return 0;
}