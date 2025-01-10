#include <bits/stdc++.h>
using namespace std;

void pop(int STACK[], int &top);

int main()
{
    int n, top = -1;
    cout << "Enter the size of the stack: ";
    cin >> n;

    int STACK[n];
    int a;
    cout << "Enter the number of elements already in the stack: ";
    cin >> a;

    if (a > n)
    {
        cout << "Error: Number of elements exceeds stack size!" << endl;
        return 0;
    }

    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < a; i++)
    {
        cin >> STACK[++top];
    }

    cout << "Elements in the stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << STACK[i] << " ";
    }
    cout << endl;

    int popCount;
    cout << "Enter the number of elements to pop: ";
    cin >> popCount;

    for (int i = 0; i < popCount; i++)
    {
        pop(STACK, top);
    }

    cout << "Elements in the stack after popping: ";
    for (int i = 0; i <= top; i++)
    {
        cout << STACK[i] << " ";
    }
    if (top == -1)
    {
        cout << "Stack is empty!";
    }
    cout << endl;

    return 0;
}

void pop(int STACK[], int &top)
{
    if (top == -1)
    {
        cout << "Underflow: Stack is empty." << endl;
    }
    else
    {
        cout << "Popped element: " << STACK[top] << endl;
        top--;
    }
}
