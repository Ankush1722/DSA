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
// int main()
// {
//     // STATICALLY
//     node n1(2);
//     node *head = &n1;
//     node n2(3);
//     n1.next = &n2;
//     cout << head->data << endl;

//     //  DYNAMICALLY
//     node *n3 = new node(10);
//     node *n4 = new node(20);
//     node *head1 = n3; // store add. of n3 into head
//     n3->next = n4;    // for linking n3 with n4;
// }

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
void print(node *head)
{
    node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    } // at the end of this temp=NULL;
    cout << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    } // at the end of this head=NULL;
}
int main()
{
    node n1(1);
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    print(head); // it prints again because head is not null in the main function.
}