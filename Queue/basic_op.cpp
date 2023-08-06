#include <iostream>
using namespace std;
#define max 10
class queue
{
public:
    int arr[max];
    int front;
    int rear;
    int size;
    queue()
    {
        this->front = -1;
        this->rear = -1;
        this->size = 0;
    }
};

int size(queue q)
{
    return (q.rear - q.front + 1);
}
bool isEmpty(queue q)
{
    return (q.front == -1 || q.front > q.rear);
}
bool isFull(queue q)
{
    return (q.rear == max - 1);
}

int peek(queue q)
{
    if (isEmpty(q))
    {
        cout << "EMPTY QUEUE" << endl;
        return -1;
    }
    else
    {
        return q.arr[q.front];
    }
}
void enqueue(queue *q, int x)
{
    if (isFull(*q))
    {
        cout << "OVERFLOW";
    }
    else if (isEmpty(*q))
    {
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = x;
        q->size++;
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = x;
        q->size++;
    }
}
int dequeue(queue *q)
{
    if (isEmpty(*q))
    {
        cout << "UNDERFLOW";
        return -1;
    }
    else
    {
        q->front++;  
        return q->arr[q->front - 1];
        q->size--;
    }
}
void print(queue q)
{
    while (q.front <= q.rear)
    {
        int a = dequeue(&q);
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    queue q;
    enqueue(&q, 10);
    enqueue(&q, 6);
    enqueue(&q, 40);
    enqueue(&q, 3);
    print(q);
    cout << "The peek of queue is: " << peek(q) << endl;
    cout << "The dequeued element is: " << dequeue(&q) << endl;
    cout << "The dequeued element is: " << dequeue(&q) << endl;
    print(q);
    cout << "The peek of queue is: " << peek(q) << endl;
}