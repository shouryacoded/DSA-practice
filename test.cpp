#include<bits/stdc++.h>
using namespace std;

int findDuplicates (vector<int> &nums)
{
    
}

void print(vector<int> &nums)
{
    for(int i : nums)
        cout << i << " ";
}

int main()
{
//    vector<int> nums = {1,3,4,2,2};
    vector<int> nums = {2,2,2,2,2};

    int res = findDuplicates(nums);
    cout << "Res : " << res;
    cout << endl;
    print(nums);
    return 0;
}