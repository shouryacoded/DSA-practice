#include<bits/stdc++.h>
using namespace std;
int main(){
    system("cls");
    //This technique can be performed with or without a flag to use the more optimized way of sorting 
    vector<int> a;
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    for(int i = 0; i< size; i++){
        int val; 
        cin >> val;
        a.push_back(val);
    }
    int flag = 0; // By using the flag we skip the iteration were there is no swapping of elements. This is a much more optimized way of bubble sort as it saves us from the worst case of the bubble sort
    for(int i =0 ; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
                flag = 1;
        }
    if(flag == 0)
    break;
    }
    cout << "\nThe array after sorting is : ";
    for(int i =0 ; i < size; i++){
        cout << a[i] << " ";
    }
    return 0;   
}