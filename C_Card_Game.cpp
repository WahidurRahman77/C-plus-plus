#include <bits/stdc++.h>
using namespace std;

bool beats(int x, int y, int n)
{
    if(x == 1 && y == n) return true;
    if(x > y && !(y == 1 && x == n)) return true;
    return false;
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector <int> A, B;
        for(int i=0; i < n; ++i)
        {
            if(s[i] == 'A')
            {
                A.push_back(i +1);
            }
            else 
            {
                B.push_back(i + 1);
            }
        }
        bool alice_wins = false;
        for(int x : A)
        {
            bool all = true;
            for(int y : B)
            {
                if(!beats(x, y, n))
                {
                    all = false;
                    break;
                }
            }
        }
        if(alice_wins){
            cout << "Alice\n";
            continue;
        }
        bool bob_wins = false;
        for(int y : B)
        {
            bool all = true;
            for( int x : A)
            {
                if(!beats(y, x, n))
                {
                    all = false;
                    break;
                }
            }
            if(all)
            {
                bob_wins = true;
                break;
            }
        }
        if(bob_wins)
        {
            cout << "Bob\n";
            continue;
        }
        bool step3 = true;
        for(int x : A)
        {
            bool found = false;
            for(int y : B)
            {
                if(beats (y, x, n))
                {
                    found = true;
                    break;
                }
            }
            if(!found){
                step3 = false;
                break;
            }
        }
        if(step3){
            cout << "Bob\n";
        }else {
            cout << "Alice\n";
        }
    }

    return 0;
}