#include <iostream>
using namespace std;
#define size 10
class stack
{
public:
    int ele[size];
    int top;
    stack()
    {
        this->top = -1;
    }
};
// stack init()
// {
//     stack s; // created a object of class stack.
//     s.top = -1;
//     return s; // accesses the element of the stack.
// }
int isEmpty(stack s)
{
    return (s.top == -1);
}
int isFull(stack s)
{
    return (s.top == size - 1);
}
int top(stack s)
{
    if (isEmpty(s))
    {
        cout << "EMPTY STACK ";
        return -1;
    }
    else
    {
        return s.ele[s.top];
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
        s->ele[s->top] = x;
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
        return s->ele[s->top + 1];
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
void reverse(stack *s, char str[])
{
    // Create a stack of capacity
    // equal to length of string
    int n = strlen(str);
    // stack *s;

    // Push all characters of string to stack
    int i;
    for (i = 0; i < n; i++)
        push(&s, str[i]);

    // Pop all characters of string and
    // put them back to str
    for (i = 0; i < n; i++)
        str[i] = pop(s);
}