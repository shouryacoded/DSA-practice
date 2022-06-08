#include<bits/stdc++.h>
using namespace std;



int main()
{
    // We are going to test the use of vectors of vectors in this file.

    vector<vector<int>> a;

    // That's how we a create a vector of vector ,i.e, a 2d vector STL in c++.

    a.push_back({1,2,3,4,5});

    for(int i = 0; i < a.size(); i++)  {
        for(int j = 0 ; i < a[i].size(); j++)   {
            cout << a[i][j] << " " << endl;
        }
    }


    return 0;
}