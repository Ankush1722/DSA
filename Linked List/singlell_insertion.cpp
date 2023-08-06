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

node *insert(node *head, int i, int data)
{
    node *newnode = new node(data);
    node *temp = head;
    if (i == 1)
    {
        newnode->next = head;
        head = newnode;
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
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}
void size(node *head)
{
    int s;
    node *temp = head;
    while (temp != NULL)
    {
        s++;
        temp = temp->next;
    }
    cout << "\nThe size of the linked list is: " << s << endl;
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
    int i, data;
    cout << " \nEnter the index: ";
    cin >> i;
    cout << "Enter the data: ";
    cin >> data;
    head = insert(head, i, data);
    print(head);
    size(head);
}

