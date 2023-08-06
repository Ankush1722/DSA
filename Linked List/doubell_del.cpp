#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
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
node *d_del(node *head, int i)
{
    node *temp = head;
    if (i == 1)
    {
        temp->next->prev = NULL;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 1;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        node *a = temp->next;
        temp->next = a->next;
        if (a->next == NULL)
        {
            return head;
        }
        else
        {
            a->next->prev = temp;
        }
        delete (a);
    }
    return head;
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
    print(head);
    int i;
    cout << "Enter the element: ";
    cin >> i;
    head = d_del(head, i);
    print(head);
}