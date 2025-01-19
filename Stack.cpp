#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int STACK[MAX], top = -1;

int main()
{
    int option, value;

    while (true)
    {
        cout << "1. Push\n2. Pop\n3. Show\n4. Exit\n";
        cout << "Enter an option: ";
        cin >> option;

        switch (option)
        {
            case 1:
                if (top == MAX - 1)
                {
                    cout << "STACK Overflow!" << endl;
                }
                else
                {
                    cout << "Enter value to push: ";
                    cin >> value;
                    STACK[++top] = value;
                    cout << value << " pushed." << endl << endl;
                }
                break;

            case 2:
                if (top == -1)
                {
                    cout << "STACK Underflow!" << endl;
                }
                else
                {
                    cout << "Popped: " << STACK[top] << endl << endl;
                    top--;
                }
                break;

            case 3:
                if (top == -1)
                {
                    cout << "STACK is empty." << endl;
                }
                else
                {
                    cout << endl << "STACK: " << endl;
                    for (int i = top; i >= 0; i--)
                    {
                        cout << STACK[i] << endl ;
                    }
                    cout << endl;
                }
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid option." << endl;
        }
    }
}
