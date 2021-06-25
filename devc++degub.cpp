#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int n = num+1;
	for(int i=0; i<n;i++){
		for(int j=n-i;j>0;j--)
			cout << " ";
		for(int k =0; k<i;k++){
			cout << "#";
		}
		cout << endl;
	}
return 0;
}
