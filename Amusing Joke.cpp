#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string S1, S2, S3, S4;
    cin >> S1 >> S2 >> S3;
    
    S4 = S1 + S2;
    sort(S4.begin(), S4.end());
    sort(S3.begin(), S3.end());
    
    if (S4 == S3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
