#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b;
    bool isFind = true;
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = 2; i <= a; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            cout << "YES";
            isFind = false;
            break;
        }
    }
    if (isFind) cout << "NO";
    return 0;
}
