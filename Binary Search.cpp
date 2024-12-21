#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble sort
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
    cout << "Sorted array using Bubble Sort: ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Binary Search
    int beg = 0, End = n-1, Mid, item;
    cout << "Enter the item for search: ";
    cin >> item;

    while(beg <= End && arr[Mid] != item)
    {
        Mid = (beg + End) / 2;

        if(item < arr[Mid])
        {
            End = Mid - 1;
        }
        else
        {
            beg = Mid + 1;
        }
    }

    if(arr[Mid] == item)
    {
        cout << "Item found at index " << Mid << endl;
    }
    else
    {
         cout << "Item not found." << endl;
    }
    return 0;
}