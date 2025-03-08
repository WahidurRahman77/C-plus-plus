#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b>> c;
        cout << "Case " << i << ":" << endl;
        for(int j=0; j <= a;j++)
        {
            for(int k = j+1; k <= b; k++)
            {
                for(int l = k+1; l <= c; l++)
                {
                    cout << j << " " << k << " " << l << endl;
                }
            }
        }

    }


    return 0;
}
