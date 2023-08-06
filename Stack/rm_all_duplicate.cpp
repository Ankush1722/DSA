#include <iostream>
using namespace std;
#define size 15
class stack
{
public:
    int arr[size];
    int top;
    stack()
    {
        this->top = -1;
    }
};
bool isEmpty(stack s)
{
    return (s.top == -1);
}
bool isFull(stack s)
{
    return (s.top == size - 1);
}
int top(stack s)
{
    if (isEmpty(s))
    {
        cout << "Stack is empty";
        return -1;
    }
    else
    {
        return s.arr[s.top];
    }
}
void push(stack *s, int x)
{
    if (isFull(*s))
    {
        cout << "OVERFLOW";
    }
    else
    {
        s->top++;
        s->arr[s->top] = x;
    }
}
int pop(stack *s)
{
    if (isEmpty(*s))
    {
        cout << "UNDERFLOW";
        return -1;
    }
    else
    {
        s->top--;
        return s->arr[s->top + 1];
    }
}
void print(stack s)
{
    while (s.top != -1)
    {
        int a = pop(&s);
        cout << a << endl;
    }
}

void print_bt_2top(stack *s)
{
    if (s->top != -1)
    {
        int k = pop(s);
        print_bt_2top(s);
        cout << k << endl;
        return;
    }
    else
    {
        return;
    }
}
void remove(int arr1[], int k)
{
    stack s;
    int i = 0;
    while (i <= k - 1)
    {
        if (s.top == -1)
        {
            push(&s, arr1[i]);
            i++;
        }
        else if (top(s) != arr1[i] && i <= k - 1)
        {
            push(&s, arr1[i]);
            i++;
        }
        else if (top(s) == arr1[i] && i <= k - 1)
        {
            pop(&s);
            i++;
        }
    }
    // s = reverse(s);
    print_bt_2top(&s);
    // return s;
}
int main()
{
    int arr1[10] = {1, 2, 2, 1, 4, 4, 5, 5, 6, 7};
    // stack s;
    remove(arr1, 10);
    // print(s);
}
