#include<bits/stdc++.h>
using namespace std;
int main()
{
    // The time complexity of this algo remains to be sqrt(n)
    // Similar to the binary search algo this is also requires the provided array to be sorted in order to perform the operations.
    system("cls");
    vector <int> a;
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    for(int i =0 ; i < n; i++){
        int val;
        cin >> val;
        a.push_back(val);
    }
    sort(a.begin(),a.end());
    for(int j =0 ; j < a.size(); j++){
        cout << a[j] << " ";
    }
    int target;
    cout << "\nEnter the number to be searched : " ;
    cin >> target;
    int low = 0;
    int m = sqrt(a.size());
    cout << "\nThe jump size of the search is : " << m;
    while(a[m] <= target && m < n){
        low = m;
        m += sqrt(a.size());
        if(m > n-1)
            cout << "\nThe element is not present in the array";
    }
    for(int x = low; low < m; low++)
    {
        if(a[low] == target)
            cout << "\nThe element was found at the index value of " << low+1;
        else
            cout << "\nThe element was not found";  
    }
    return 0;
}