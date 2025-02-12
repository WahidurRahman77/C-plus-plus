#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n= 500000;
    cin >> a;
    vector <int> div(n+1, 0);
    for(int i =1; i <= n;i++)
    {
        for(int j = 2*i;j <=n;j+=i)
        {
            div[j] += i;
        }
    }
    while (a--)
    {
       int b;
       cin >> b;
       cout << div[b] << endl;
    }
    return 0;
}
