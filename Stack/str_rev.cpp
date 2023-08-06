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

int main()
{
    stack s;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int sz = str.length();
    cout << "The size of the string is: " << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        char sh = str[i];
        push(&s, sh);
    }
    cout << "The reverse of string is: ";
    print(s);
    return 0;
}
