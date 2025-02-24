#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t--)
    {
        int n, m;
        cin >> m >> n;
        if ( m %n == 0 && (m/n ) %2 == 0)
        {
            cout << "Yes" << endl;
        }
        else {

            cout << "No" << endl;

        }

    }
    return 0;
}
// Problem link : https://www.codechef.com/problems/CANDYDIST