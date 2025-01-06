#include <bits/stdc++.h>
using namespace std;
void printList(int data[], int link[], int start)
{
int current = start;
while (current != -1)
{
cout << data[current - 1] << " -> ";
current = link[current - 1];
}
cout << "NULL" << endl;
}
int getNextAvail(int data[], int totalNodes)
{
for (int i = 1; i <= totalNodes; i++)
{
if (data[i - 1] == 0)
{
return i;
}
}
return -1;
}
void insertAtPosition(int data[], int link[], int &start, int &avail, int
newData, int position, int totalNodes)
{
if (avail == -1)
{
cout << "No available nodes for insertion!" << endl;
return;
}
int newNode = avail;
avail = getNextAvail(data, totalNodes);
data[newNode - 1] = newData;
if (position == 0)
{
link[newNode - 1] = start;
start = newNode;
}
else
{
int current = start;
for (int i = 0; i < position - 1 && current != -1; i++)
{
current = link[current - 1];
}
if (current == -1)
{
cout << "Invalid position!" << endl;
data[newNode - 1] = 0;
link[newNode - 1] = -1;
return;
}
link[newNode - 1] = link[current - 1];
link[current - 1] = newNode;
}
}
int main()
{
int data[10], link[10];
int input[10][2] = {
{45, 7}, {57, 10}, {98, 2}, {12, -1}, {76, 1},
{0, -1}, {10, 3}, {23, 4}, {0, -1}, {9, 8}
};
for (int i = 0; i < 10; i++)
{
data[i] = input[i][0];
link[i] = input[i][1];
}
int start = 5;
int avail = 6;
int totalNodes = 10;
cout << "Original Linked List: ";
printList(data, link, start);
int newData, position;
cout << "Enter position to insert (0-based index): ";
cin >> position;
cout << "Enter data to insert: ";
cin >> newData;
insertAtPosition(data, link, start, avail, newData, position, totalNodes);
cout << "Updated Linked List: ";
printList(data, link, start);
cout << "Updated avail pointer: " << avail << endl;
return 0;
}