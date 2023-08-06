#include <iostream>
#include <string>
using namespace std;
#define size 20
class stack
{
public:
    char ele[size];
    int top;
    stack()
    {
        this->top = -1;
    }
};
int isEmpty(stack s)
{
    return (s.top == -1);
}
int isFull(stack s)
{
    return (s.top == size - 1);
}
char top(stack s)
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
void push(stack *s, char x)
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
char pop(stack *s)
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
        char a = pop(&s);
        cout << a;
    }
}
bool brackets_balanced(stack *s, string str)
{
    // stack s;
    for (int i = 0; i < str.length(); i++)
    {
        if (isEmpty(*s))
        {
            push(s, str[i]);
        }
        else if ((top(*s) == '(' && str[i] == ')') || (top(*s) == '{' && str[i] == '}') || (top(*s) == '[' && str[i] == ']'))
        {
            pop(s);
        }
        else
        {
            push(s, str[i]);
        }
    }
    if (isEmpty(*s))
    {
        return true;
    }
    return false;
}
int main()
{
    stack s;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (brackets_balanced(&s,str))
    {
        cout << "balanced";
    }
    else
    cout << "inbalanced";
    return 0;
}
