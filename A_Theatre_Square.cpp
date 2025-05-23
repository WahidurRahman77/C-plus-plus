#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    long long flagstones_length = (a + c - 1) / c;
    long long flagstones_width = (b + c - 1) / c;

    cout << flagstones_length * flagstones_width << endl;


    return 0;
}
