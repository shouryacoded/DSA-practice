#include<bits/stdc++.h>
using namespace std;

void say_hello(int n)
{
    if (n== 1)
    {
        return;
    }
    cout << "Hello " << << endl;
    say_hello(n-1);
}

int main()
{
    say_hello(10);
    return 0;
}