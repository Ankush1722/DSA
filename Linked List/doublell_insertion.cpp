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
node *dll_insert(node *head, node **tail, int i, int data)
{
    node *newnode = new node(data);
    node *temp = head;
    //node *temp1 = tail;
    if (i == 1)
    {
        temp->prev = newnode;
        newnode->next = temp;
        newnode->prev = NULL;
        head = newnode;
        return head;
    }
    int count = 1;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
        if (temp->next == NULL)
        {
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next = NULL;
            *tail = newnode;
            return head;
        }
    }
    if (temp != NULL)
    {
        node *a = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        newnode->next = a;
        a->prev = newnode;
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
    node *tail;
    print(head);
    int i;
    cout << "Enter the index: ";
    cin >> i;
    int data;
    cout << "Enter the number: ";
    cin >> data;
    head = dll_insert(head, &tail, i, data);
    print(head);
}