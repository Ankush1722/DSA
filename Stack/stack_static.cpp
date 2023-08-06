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
stack reverse(stack s)
{
    stack s2;
    while (s.top != -1)
    {
        int b = pop(&s);
        push(&s2, b);
    }
    return s2;
}
int main()
{
    stack s;
    // s = init();
    push(&s, 10);
    push(&s, 45);
    push(&s, 1);
    push(&s, 50);
    cout << "Current Stack: " << endl;
    print(s);
    cout << "Top of the stack is: " << top(s) << endl;
    cout << "Element popped:" << pop(&s) << endl;
    cout << "Element popped:" << pop(&s) << endl;
    cout << "Current Stack: " << endl;
    print(s);
    cout << "Top of the stack is: " << top(s) << endl;
    cout << "Reversed stack is: " << endl;
    s = reverse(s);
    print(s);
    return 0;
}
