#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    int link;
};

void printList(Node nodes[], int start)
{
    int current = start;
    while (current != -1)
    {
        cout << nodes[current - 1].data << " -> ";
        current = nodes[current - 1].link;
    }
    cout << "NULL" << endl;
}

int getNextAvail(Node nodes[], int totalNodes)
{
    for (int i = 1; i <= totalNodes; i++)
    {
        if (nodes[i - 1].data == 0)
        {
            return i;
        }
    }
    return -1;
}

void insertAtPosition(Node nodes[], int &start, int &avail, int data, int position, int totalNodes)
{
    if (avail == -1)
    {
        cout << "No available nodes for insertion!" << endl;
        return;
    }

    int newNode = avail;
    avail = getNextAvail(nodes, totalNodes);

    nodes[newNode - 1].data = data;

    if (position == 0)
    {
        nodes[newNode - 1].link = start;
        start = newNode;
    }
    else
    {
        int current = start;
        for (int i = 0; i < position - 1 && current != -1; i++)
        {
            current = nodes[current - 1].link;
        }

        if (current == -1)
        {
            cout << "Invalid position!" << endl;
            nodes[newNode - 1].data = 0;
            nodes[newNode - 1].link = -1;
            return;
        }

        nodes[newNode - 1].link = nodes[current - 1].link;
        nodes[current - 1].link = newNode;
    }
}

int main()
{
    Node nodes[10] = {
        {45, 7},{57, 10},{98, 2},{12, -1},{76, 1},
        {0, -1},{10, 3},{23, 4},{0, -1},{9, 8}
    };

    int start = 5;
    int avail = 6;
    int totalNodes = 10;

    cout << "Original Linked List: ";
    printList(nodes, start);

    int data, position;
    cout << "Enter position to insert (0-based index): ";
    cin >> position;
    cout << "Enter data to insert: ";
    cin >> data;

    insertAtPosition(nodes, start, avail, data, position, totalNodes);

    cout << "Updated Linked List: ";
    printList(nodes, start);

    cout << "Updated avail pointer: " << avail << endl;

    return 0;
}
