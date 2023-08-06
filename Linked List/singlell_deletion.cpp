// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };
// node *input()
// {
//     int data;
//     cin >> data;
//     node *head = NULL;
//     node *tail = NULL;
//     while (data != -1)
//     {
//         node *newnode = new node(data);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
//         cin >> data;
//     }
//     return head;
// }

// node *del(node *head, int i)
// {
//     node *temp = head;
//     if (i == 1)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//         return head;
//     }
//     int count = 1;
//     while (temp != NULL && count < i - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp != NULL)
//     {
//         node *a = temp->next;
//         temp->next = a->next;
//         delete (a);
//     }
//     else
//     {
//         cout << "Index not valid";
//     }
//     return head;
// }
// void print(node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }
// int main()
// {
//     node *head = input();
//     print(head);
//     int i;
//     cout << "\nEnter the indx: ";
//     cin >> i;
//     head = del(head, i);
//     print(head);
// }

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        next = NULL;
    }
};

node* input() {
    int data;
    cin >> data;

    node* head = NULL;
    node* tail = NULL;

    while (data != -1) {
        node* newnode = new node(data);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }

        cin >> data;
    }

    // Make the list circular
    tail->next = head;

    return head;
}

node* del(node* head, int i) {
    if (head == NULL)
        return head;

    node* temp = head;
    node* prev = NULL;
    int count = 0;

    // Traverse to the (i-1)th node
    do {
        prev = temp;
        temp = temp->next;
        count++;
    } while (temp != head && count < i - 1);

    // If the index is not valid
    if (count != i - 1) {
        cout << "Index not valid" << endl;
        return head;
    }

    // If the node to be deleted is the head node
    if (temp == head)
        head = head->next;

    // Update the next pointer of the previous node
    prev->next = temp->next;

    // Delete the node
    delete temp;

    return head;
}

void print(node* head) {
    node* temp = head;

    // Traverse the circular list and print the elements
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    node* head = input();
    print(head);

    int i;
    cout << "Enter the index (1 to size) to delete: ";
    cin >> i;

    head = del(head, i);
    print(head);

    return 0;
}
