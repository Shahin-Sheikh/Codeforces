//What will be the output of the following code?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 321;
    //cin >> n;
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << rev;
    return 0;
}