#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long int limit = 1000000;
    cin >> test;
    vector <int> vec;
    vector<bool> prime(limit + 1, 1);
    prime[0] = prime[1] = 0;
    for(int i = 1; i*i <= limit; i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j <= limit; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= limit; i++)
    {
        if(prime[i])
        {
            vec.push_back(i);
        }
    }
    while(test--)
    {
        int n;
        cin >> n;
        cout << vec[n-1] << endl;
    }

    return 0;
}
