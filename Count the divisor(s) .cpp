#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, c = 0;
        cin >> n;
        for(int i = 1; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                if(i == n/i)
                {
                    c++;
                }
                else
                {
                    c += 2;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
