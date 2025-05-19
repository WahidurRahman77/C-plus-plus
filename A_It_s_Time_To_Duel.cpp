#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool consecutiveZeros = false;
        for(int i = 0; i < n - 1;++i)
        {
            if(a[i] == 0 && a[i + 1] == 0)
            {
                consecutiveZeros = true;
                break;
            }
        }
        if(consecutiveZeros)
        {
            cout << "YES\n";
            continue;
        }
        vector <int> duels(n-1, 0);
        for(int i = 1; i <= n; ++i)
        {
            if(a[i-1] == 0)
            {
                if(i > 1)
                {
                    int duel_idx = i - 2;
                    duels[duel_idx] = i-1;
                }
                if(i < n)
                {
                    int duel_idx = i - 1;
                    duels[duel_idx] = i + 1;
                }
            }
        }

        int s_count = 0;
        int unforced_count = 0;
        bool possible = true;

        for(int i = 1; i <=n; ++i)
        {
            if(a[i-1] == 0) continue;
            bool has_forced_win = false;
            bool has_unforced = false;

            if(i > 1)
            {
                int duel_idx = i -2;
                if(duel_idx >= 0 && duels[duel_idx] != 0){
                    if(duels[duel_idx] == i)
                    {
                        has_forced_win = true;
                    }
                }
                else if(duel_idx >= 0 && duels[duel_idx] == 0)
                {
                    has_unforced = true;
                }
            }
            if(i < n)
            {
                int duel_idx = i - 1;
                if(duel_idx < n-1 && duels[duel_idx] != 0)
                {
                    if(duels[duel_idx] == i)
                    {
                        has_forced_win = true;
                    }
                }
                else if(duel_idx < n-1 && duels[duel_idx] == 0)
                {
                    has_unforced = true;
                }
            }
            if(!has_forced_win)
            {
                if(!has_unforced)
                {
                    possible = false;
                    break;
                }
                s_count++;
            }
        }
        if(!possible)
        {
            cout << "YES\n";
            continue;
        }

        unforced_count = 0;
        for(int d : duels)
        {
            if(d == 0)
            {
                unforced_count++;
            }
        }
        
        if(s_count > unforced_count)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}