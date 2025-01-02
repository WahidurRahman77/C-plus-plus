#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f =0, element;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element: ";
    cin >> element;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == element)
        {
            f=1;
            break;
        }
    }
    if(f == 1)
    {
        cout << "The elemnent is found" << endl;
    }
    else
    {
        cout << "The elemnent is not found" << endl;
    }

    return 0;
}
