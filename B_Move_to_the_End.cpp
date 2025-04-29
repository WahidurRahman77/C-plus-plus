#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <long long> a(n);
    for(auto &x : a) cin >> x;

    vector <long long> s(n+1, 0);
    for(int i =1; i <=n;++i)
    {
        s[i] = s[i-1] + a[n-i];
    }
    vector <long long> prefix(n);
    prefix[0] = a[0];
    for(int i =1;i < n;++i)
    {
        prefix[i] = max(prefix[i-1], a[i]);
    }
    vector <long long> res(n);
    for(int k =1; k <= n; ++k)
    {
        int idx = n-k;
        long long mx = (idx >= 0) ? prefix[idx] : 0;
        long long candidate = s[k-1] + mx;
        res[k-1] = max(s[k], candidate);
    }
    for(auto x :res){
        cout << x << ' ';
    }
    cout << endl;
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}