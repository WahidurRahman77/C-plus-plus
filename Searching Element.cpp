#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a=0, b=1, series=0;
    printf("Enter a number: ");
    cin >> n;
    cout << "The Fibonacci series of " << n << " is: ";
    for(i = 1; i <= n; i++)
    {
        cout << a << " ";
        series = a + b;
        a = b;
        b = series;
    }

    return 0;
}