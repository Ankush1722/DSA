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
    tail->next = head;
    return head;
}

node *del(node *head, int i)
{
    node *temp = head;
    node *tail = head;
    if (i == 1)
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = tail->next->next;
        head = head->next;
        return head;
    }
    int count = 1;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    node *a = temp->next;
    temp->next = a->next; // or temp->next->next;
    free(a);
    return head;
}
int size(node *head)
{
    int s = 0;
    node *temp = head;
    do
    {
        s++;
        temp = temp->next;
    } while (temp != head);
    return s;
}
void print(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    node *head = input();
    print(head);
    int s = size(head);
    cout << "\nThe size of the linked list is: " << s << endl;
    int i;
    cout << "Enter the index: ";
    cin >> i;
    if (i > s)
    {
        cout << "INVALID INDEX!!!!!";
        return -1;
    }
    head = del(head, i);
    print(head);
    int sz = size(head);
    cout << "\nThe size of the linked list is: " << sz << endl;
}