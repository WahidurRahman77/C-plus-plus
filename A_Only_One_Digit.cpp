#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--) 
    {
        int x;
        cin >> x;
        if(x <= 9)
        {
            cout << x << "\n";
        }
            
        else
        {
            int c = 9;
            while(x > 0)
            {
                int a = x % 10;
                x = x/10;
                c = min(c, a);
            }
            cout << c << "\n";
        }

    }

    return 0;

}
