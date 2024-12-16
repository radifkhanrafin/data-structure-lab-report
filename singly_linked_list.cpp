#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};

class mySinglyList
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    // Insert a new node at the end
    void insert(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    // Traverse the list and print values
    void traverse()
    {
        Node *currentNode = head;
        if (currentNode == NULL)
        {
            cout << "Empty Node." << endl;
            return;
        }
        while (currentNode != NULL)
        {
            cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }

    // Delete the last node (tail)
    void deletes()
    {
        if (head == NULL) // List is empty
        {
            cout << "There is no node, please insert first." << endl;
            return;
        }

        if (head == tail) // Only one node in the list
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            Node *currentNode = head;
            // Traverse to the second last node
            while (currentNode->next != tail)
            {
                currentNode = currentNode->next;
            }
            // Delete the last node (tail)
            delete tail;
            tail = currentNode;
            tail->next = NULL; // Make sure the new tail's next is NULL
        }
    }
};

int main()
{
    mySinglyList list;
    while (true)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            break;
        }
        list.insert(x);
    }

    cout << "Output of the list: ";
    list.traverse();
    list.deletes();

    cout << "Output of the list: ";
    list.traverse();
    list.deletes();

    cout << "Output of the list: ";
    list.traverse();

    return 0;
}
