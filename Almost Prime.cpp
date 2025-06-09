#include <bits/stdc++.h>
using namespace std;

int main()
{
   //
    int num, c=0;
    cin >> num;
    for(int i = 2; i <= num; i++)
    {
        int primec=0;
        int i1 = i;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i%j == 0)
            {
                primec++;
                while(i%j == 0)
                {
                    i/=j;
                }
            }
        }
        if(i > 1) primec++;
        if(primec ==2)
        {
            c++;
        }
        i = i1;
    }
    cout << c << endl;

    return 0;
}
