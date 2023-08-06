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

node *insert(node *head, int i, int data)
{
    node *newnode = new node(data);
    node *temp = head;
    node *tail = head;
    if (i == 1)
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = newnode;
        newnode->next = temp;
        head = newnode;
        return head;
    }
    int count = 1;
    while (count < i - 1)
    {
        temp = temp->next;
        count++;
    }

    newnode->next = temp->next;
    temp->next = newnode;

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
    int i, data;
    cout << "Enter the index(1 to size): ";
    cin >> i;
    if (i > s + 1)
    {
        cout << "INVALID INDEX!!!";
        return -1;
    }
    cout << "Enter the data: ";
    cin >> data;

    head = insert(head, i, data);
    print(head);
    int sz = size(head);
    cout << "\nThe size of the linked list is: " << sz << endl;
}
