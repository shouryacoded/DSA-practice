#include<bits/stdc++.h>
using namespace std;


int romantoInt(string s)
{
    int count = 0;
    unordered_map<char,int> legends = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };

    for(int i = 0; i < s.size(); i++)
    {
        if(i+1 < s.size() && legends[s[i]] < legends[s[i+1]])
            count -= legends[s[i]];
        else
            count += legends[s[i]];
    }
    return count;
}

int main()
{
    string number;
    cout << "Enter a Roman Number String : " << endl;
    getline(cin,number);
    int result = romantoInt(number);
    cout << result;
    return 0;
}