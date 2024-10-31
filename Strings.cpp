#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string S1, S2, S3;
    cin >> S1 >> S2;
 
    cout << S1.length() << " " << S2.length() << endl << S1+S2 <<endl;
 
    S3[0] = S1[0];
    S1[0] = S2[0];
    S2[0] = S3[0];
 
    cout << S1 << " " << S2 << endl;
 
    return 0;
}