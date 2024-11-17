#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double s1, s2, s3, s4;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2 >> s3;
        s4 = (s1 * 2 + s2 * 3 + s3 * 5) / 10.0;
        cout << fixed << setprecision(1) << s4 << endl;
    }

    return 0;
}
