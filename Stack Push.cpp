#include <iostream>
using namespace std;

void push(int STACK[], int &top, int n, int item);

int main()
{
    int n, top = -1;
    cout << "Enter the size of the stack: ";
    cin >> n;

    int STACK[n];
    int a;
    cout << "Enter the number of elements to push: ";
    cin >> a;

    if (a > n)
    {
        cout << "Error: Number of elements exceeds stack size!" << endl;
        return 0;
    }

    for (int i = 0; i < a; i++)
    {
        int item;
        cout << "Enter element to push: ";
        cin >> item;

        push(STACK, top, n, item);
    }

    cout << "Elements in the stack";
    for (int i = 0; i <= top; i++)
    {
        cout << " --> " << STACK[i] ;
    }
    cout << endl;

    return 0;
}

void push(int STACK[], int &top, int n, int item)
{
    if (top == n - 1)
    {
        cout << "Overflow: Stack is full." << endl;
    }
    else
    {
        top++;
        STACK[top] = item;
    }
}
