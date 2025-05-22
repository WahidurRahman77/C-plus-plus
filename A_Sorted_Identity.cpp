#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int l = 0, r = n-1;
        while(l < n && arr[l] == l+1)
        {
            l++;
        }
        while(r >= 0 && arr[r] == r+1)
        {
            r--;
        }
        if(l > r)
        {
            cout << 0 << endl;
        }
        else 
        {
            bool pos = 0;
            for(int i = l; i <= r; i++)
            {
                if(arr[i] == i +1)
                {
                    pos = 1;
                    break;
                }
            }
            cout << (pos ? 2:1) << endl;
        }
    }


    return 0;
}