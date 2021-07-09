#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ,g,c;
	cin >> t;
	while (t--)
	{
		cin >> g >> c;
		long long ans = pow(c,2)/(2*g);
		cout << ans << endl;
	}
	return 0;
}