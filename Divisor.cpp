#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    vector <long long int> d;
    for(long long int i =1; i*i<=test;i++)
    {
        if(test % i == 0)
        {
            d.push_back(i);
            if(i != test/i)
            {
                d.push_back(test/i);
            }
        }
    }
    sort(d.begin(), d.end());
    cout << d.size() << endl;
    for(long long int i : d)
    {

         cout << i << " ";

    }


    return 0;
}

