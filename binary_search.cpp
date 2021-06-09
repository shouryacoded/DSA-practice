#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector <int> a;
    int val, size;
    cout << "Enter the size of the vector ";
    cin >> size;
    for(int i = 0; i < size;i++){
        cin >> val;
        a.push_back(val);
    }
    sort(a.begin(),a.end());
    cout << "The array entered is : " ;
    for(int i = 0; i < size;i++){
        cout << a[i] << " ";
    }
    int target, step = 0;
    cout << "\nEnter the element to be searched : " ;
    cin >> target;
    int low = 0, high = a.size()-1;
    while(high >= low){
        int mid = low + (high - low)/2;
        step++;
        if(a[mid] == target){
            cout << "The number was found at : " << mid+1;
            cout << "\nThe number of steps were : " << step;
            break;  //<- if there is no break statement in the program it won't stop when the target is met
        }
        else if(target > a[mid])
            low = mid+1;
        else
            high = mid-1;
    }
    return 0;
}
