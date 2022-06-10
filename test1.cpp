#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pair<pair<string,int>,pair<string,int>> a;
    //a.first.first = "Shourya";
    //a.second.first = "Saloni";
    //a.first.second = 10;
    //a.second.second = 5;
    //cout << a.first.first << " " << a.first.second << " " << a.second.first << " " << a.second.second << endl;

    vector<pair<string,int>> arr = {{"Shourya",10}, {"Saloni",15}};

    //for(int i = 0; i < 2; i++){
    //    cout << arr[i].first << " " << arr[i].second << " ";
    //}


        cout << endl;

    
    vector<int> a(5,12);
    a.push_back(10);
    a.emplace_back(2);
    for(int i : a)
        cout << i << " ";
    return 0;
}