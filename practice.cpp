#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *previous;
    Node(int val)
    {
        this->previous = NULL;
        this->value = val;
        this->next = NULL;
    }
};

class myClass
{
public:
    int value;
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {

        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }

    void pop()
    {
        if (tail == NULL)
        {
            cout << "Stack is empty, cannot pop.\n";
            return;
        }
        Node *deleteNode = tail;
        if (tail == head)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            tail = tail->previous;
            tail->next = NULL;
        }
        delete deleteNode;
    }

    void traverse()
    {
        Node *currentNode = head;
        while (currentNode != NULL)
        {
            cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};

int main()
{

    myClass stck;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }

        stck.push(x);
    }

    cout << "output of stack list -" << endl;
    stck.traverse();
    stck.pop();
    cout << "output of stack list -" << endl;
    stck.traverse();
    stck.pop();
    cout << "output of stack list -" << endl;
    stck.traverse();
    stck.pop();
    cout << "output of stack list -" << endl;
    stck.traverse();
    stck.pop();
    cout << "output of stack list -" << endl;
    stck.traverse();
    stck.pop();
    
    return 0;
}