#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
vector <int> sp(MAX + 1);

void sieve()
{
    for(int i = 2; i <= MAX; i++) sp[i] = i;
    for(int i = 2; i*i <= MAX; i++)
    {
        if(sp[i] == i)
        {
            for(int j = i*i; j <= MAX; j+= i)
            {
                if(sp[j] == j)
                {
                    sp[j] = i;
                }
            }
        }
    }
}

int primefactor (int n)
{
    set <int> prime_factors;
    while(n > 1)
    {
        prime_factors.insert(sp[n]);
        n /= sp[n];
    }
    return prime_factors.size();
}

int main()
{
    
    sieve();

    int n;
    while(cin >> n && n != 0)
    {
        cout << n << " : " << primefactor(n) << endl;
    }

    return 0;
}
