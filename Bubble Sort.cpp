#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            int temp = 0;
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Bubble sort is: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
