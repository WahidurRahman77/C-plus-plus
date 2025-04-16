#include <bits/stdc++.h>
using namespace std;

bool p(const string& s)
{
    int l = 0, r = s.size() - 1;
    while(l < r)
    {
        if(s[l] != s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector <string> S(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> S[i];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j =0; j < n; ++j)
        {
            if(i == j) continue;
            string combained = S[i] + S[j];
            if(p(combained))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
