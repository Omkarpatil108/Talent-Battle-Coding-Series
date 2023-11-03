#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void removeduplicate(Node *&first)
    {
        Node *p = first;
        Node *q = first->next;
        while (q)
        {
            if (p->data != q->data)
            {
                p = q;
                q = q->next;
            }
            else
            {
                p->next = q->next;
                delete q;
                q = p->next;
            }
        }
    }

void print(Node *&first)
{
    Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(20);
    first->next->next->next = new Node(30);
    first->next->next->next->next = new Node(30);
    first->next->next->next->next->next = new Node(40);
    removeduplicate(first);
    print(first);
    
}