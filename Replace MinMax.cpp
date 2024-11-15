#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, small = INT_MAX, big = INT_MIN, e = -1, f = -1;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < small)
        {
            small = a[i];
            e = i;
        }
        if (a[i] > big)
        {
            big = a[i];
            f = i;
        }
    }

    swap(a[e], a[f]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
