#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n < 2) return 0;
    if(n == 2) return 1;
    if ( n % 2 == 0) return 0;
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int j = 1; j <= t; ++j)
    {
        string s;
        getline(cin, s);
        map<char, int> freq;
        for(char c : s)
        {
            freq[c]++;
        }
         vector <char> r;
        for(auto& entry : freq)
        {
            if(prime(entry.second))
            {
                r.push_back(entry.first);
            }
        }
        cout << "Case " << j << ": ";
        if(r.empty())
        {
            cout << "empty";
        }
        else
        {
            for(char c : r)
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
