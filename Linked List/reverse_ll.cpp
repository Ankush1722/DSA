#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *input()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
void reverseuntil(node *curr, node *prev, node **head)
{
    if (!curr->next)
    {
        *head = curr;
        curr->next = prev;
        return;
    }
    node *next = curr->next;
    curr->next = prev;
    reverseuntil(next, curr, head);
}
void reverse(node **head)
{
    if (!head)
        return;
    reverseuntil(*head, NULL, head);
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = input();
    cout << "The linked list is: ";
    print(head);
    reverse(&head);
    cout << "\nThe reversed linked list is: ";
    print(head);
}