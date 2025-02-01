#include <bits/stdc++.h>
using namespace std;

bool isFull(int rear, int SIZE);
bool isEmpty(int FRONT, int rear);
void enQUEUE(int QUEUE[], int &FRONT, int &rear, int SIZE, int value);
void deQUEUE(int QUEUE[], int &FRONT, int &rear);
void display(int QUEUE[], int FRONT, int rear);
void addK(int QUEUE[], int FRONT, int rear, int k);

int main()
{
    int SIZE, option = 0, value, k;
    cout << "Enter the SIZE of the QUEUE: ";
    cin >> SIZE;

    int QUEUE[SIZE];
    int FRONT = -1, rear = -1;

    while (option != 5)
    {
        cout << "\nQUEUE Operations:\n";
        cout << "1. ENQUEUE\n2. DEQUEUE\n3. Display\n4. Add value k to every node\n5. Exit\n";
        cout << "Enter Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter value to enQUEUE: ";
            cin >> value;
            enQUEUE(QUEUE, FRONT, rear, SIZE, value);
            break;
        case 2:
            deQUEUE(QUEUE, FRONT, rear);
            break;
        case 3:
            display(QUEUE, FRONT, rear);
            break;
        case 4:
            cout << "Enter value k to add: ";
            cin >> k;
            addK(QUEUE, FRONT, rear, k);
            break;
        case 5:
            cout << "Exited\n";
            break;
        default:
            cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}

bool isFull(int rear, int SIZE)
{
    return rear == SIZE - 1;
}

bool isEmpty(int FRONT, int rear)
{
    return FRONT == -1 || FRONT > rear;
}

void enQUEUE(int QUEUE[], int &FRONT, int &rear, int SIZE, int value)
{
    if (isFull(rear, SIZE))
    {
        cout << "QUEUE is full. Cannot enQUEUE.\n";
        return;
    }
    if (FRONT == -1) FRONT = 0;
    QUEUE[++rear] = value;
    cout << value << " Enqueued successfully.\n";
}

void deQUEUE(int QUEUE[], int &FRONT, int &rear)
{
    if (isEmpty(FRONT, rear))
    {
        cout << "QUEUE is empty. Cannot Dequeue.\n";
        return;
    }
    cout << QUEUE[FRONT] << " Dequeued successfully.\n";
    FRONT++;
    if (FRONT > rear) FRONT = rear = -1;
}

void display(int QUEUE[], int FRONT, int rear)
{
    if (isEmpty(FRONT, rear))
    {
        cout << "QUEUE is empty.\n";
        return;
    }
    cout << "QUEUE elements: ";
    for (int i = FRONT; i <= rear; i++)
    {
        cout << QUEUE[i] << " ";
    }
    cout << endl;
}

void addK(int QUEUE[], int FRONT, int rear, int k)
{
    if (isEmpty(FRONT, rear))
    {
        cout << "QUEUE is empty. Cannot add value.\n";
        return;
    }
    for (int i = FRONT; i <= rear; i++)
    {
        QUEUE[i] += k;
    }
    cout << "Added " << k << " to every element in the QUEUE.\n";
}
