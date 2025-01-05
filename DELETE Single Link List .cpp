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

void deleteNode(Node nodes[], int &start, int &avail, int position, int totalNodes)
{
    if (start == -1)
    {
        cout << "List is empty!" << endl;
        return;
    }

    int current = start;

    if (position == 0)
    {
        start = nodes[current - 1].link;
        nodes[current - 1].data = 0;
        nodes[current - 1].link = avail;
        avail = current;
        return;
    }

    for (int i = 0; i < position - 1 && current != -1; i++)
    {
        current = nodes[current - 1].link;
    }

    if (current == -1 || nodes[current - 1].link == -1)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    int toDelete = nodes[current - 1].link;
    nodes[current - 1].link = nodes[toDelete - 1].link;
    nodes[toDelete - 1].data = 0;
    nodes[toDelete - 1].link = avail;
    avail = toDelete;
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
    int position;

    cout << "Original Linked List: ";
    printList(nodes, start);

    cout << "Enter position to delete (0-based index): ";
    cin >> position;

    deleteNode(nodes, start, avail, position, totalNodes);

    cout << "Updated Linked List after deletion: ";
    printList(nodes, start);

    cout << "Updated avail pointer: " << avail << endl;

    return 0;
}
