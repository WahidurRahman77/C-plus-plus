#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long total = 1LL * n * (n+1) / 2;
    long long sum = 0, num;

    for(int i = 0; i < n-1; i++)
    {
        cin >> num;
        sum += num;
    }

    cout << total - sum << endl;

            
    return 0;
}