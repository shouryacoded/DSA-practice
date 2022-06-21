#include<bits/stdc++.h>
using namespace std;

string inttoRoman(int number){
    string result;
    unordered_map<int,char> legends = {
        {1,'I'},
        {5,'V'},
        {10,'X'},
        {50,'L'},
        {100,'C'},
        {500,'D'},
        {1000,'M'},   
    };
    
    return result;
}

int main()
{
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    string result = inttoRoman(number);
    cout << "The number in roman is " << result << endl;
    return 0;
}