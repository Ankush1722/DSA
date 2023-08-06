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

void remove_dup(node *head)
{
    node *temp1 = head;
    while (temp1 != NULL && temp1->next != NULL)
    {
        node *temp2 = temp1;
        while (temp2->next != NULL)
        {
            if (temp1->data == temp2->next->data)
            {
                node *dup = temp2->next;
                temp2->next = temp2->next->next;
                free(dup);
            }
            else
            {
                temp2 = temp2->next;
            }
        }
        temp1 = temp1->next;
    }
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
    cout << "INITIALLY LINKED LIST: ";
    print(head);
    // cout << endl;
    remove_dup(head);
    cout << "\nLINKED LIST AFTER REMOVE DUPLICATES: ";
    print(head);
}