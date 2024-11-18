#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        vector<int> a(n); 
        unordered_map<int, int> freq; 
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int max_score = 0;
        for (auto &entry : freq) 
        {
            max_score += entry.second / 2; 
        }

        cout << max_score << endl;
    }

    return 0;
}
