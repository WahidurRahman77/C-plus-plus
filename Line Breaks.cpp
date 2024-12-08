#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_test_case;
    cin >> number_of_test_case;

    while (number_of_test_case--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }

        int totalLength = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (totalLength + words[i].length() <= m)
            {
                totalLength += words[i].length();
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
