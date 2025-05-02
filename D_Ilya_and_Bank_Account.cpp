#include <bits/stdc++.h>
using namespace std;

int profit(int n)
{
    if(n >= 0) return n;
    int first = n/10;
    int last = n % 10;
    int second = (n/100)*10 + last;

    return max(first, second);
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout << profit(n) << endl;

    return 0;
}