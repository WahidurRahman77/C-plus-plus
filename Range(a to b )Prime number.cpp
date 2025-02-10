#include <bits/stdc++.h>
using namespace std;

int main()
{
    int st, End,c=0;
    cin >> st >> End;

    if (st > End) swap(st, End);

    for (int i = st; i <= End; i++)
        {
        if (i < 2) continue;

        bool prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i %j == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
          c++;
            cout << i <<endl;
        }

        if(i==End && c==0) cout<<"Absent"<< endl;
    }

    cout << endl;


    return 0;
}
