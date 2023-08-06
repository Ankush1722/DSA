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

class queue
{
public:
    node *front;
    node *rear;

    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data)
    {
        int d = data;
        while (d != -1)
        {
            node *newnode = new node(d);
            if (front == NULL)
            {
                front = newnode;
                rear = newnode;
            }
            else
            {
                rear->next = newnode;
                rear = newnode;
            }
            cin >> d;
        }
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "UNDERFLOW" << endl;
        }
        else
        {
            node *temp = front;
            front = front->next;
            cout << temp->data << " element is dequeued" << endl;
            delete temp;
        }
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No elements!!!" << endl;
            return -1;
        }
        else
        {
            cout << "\nThe peek element is: " << front->data << endl;
            return front->data;
        }
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "No elements" << endl;
        }
        node *temp = front;
        cout << "The queue is: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    int choice;
    queue q;
    int data;
    do
    {
        cout << "Operations to be performed:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display queue" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to enqueue: ";
            cin >> data;
            q.enqueue(data);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 5:
            cout << "Exit from the code";
            break;
        default:
            cout << "Invalid Input!!!" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}