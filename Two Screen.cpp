#include <iostream>
#include <string>
using namespace std;


int main() 
{
    int q;
    cin >> q;
    
    while (q--) 
    {
        string s, t;
        cin >> s >> t;
        
        int lcp = 0;
        while (lcp < s.length() && lcp <  t.length() && s[lcp] == t[lcp]) 
        {
            lcp++;
        }
        
        int option1 = s.length() + (t.length() - lcp) + 1;
        int option2 = s.length() + t.length();
        
        int result = min(option1, option2);
        
        cout << result << endl;
    }

    return 0;
}
