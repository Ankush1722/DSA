// #include <iostream>
// #include <stack>
// #include <queue>
#include <bits/stdc++.h>
using namespace std;

void interleave(queue<int> &q)
{
    if (q.size() % 2 != 0)
    {
        cout << "Enter even number of elements." << endl;
    }

    stack<int> s;
    int halfsize = q.size() / 2;
    // push first half into stack
    for (int i = 0; i < halfsize; i++)
    {
        s.push(q.front());
        q.pop();
    }
    // enqueue back the stack elements
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    // dequeue first half element of queue and enqueue them back.
    for (int i = 0; i < halfsize; i++)
    {
        q.push(q.front());
        q.pop();
    }
    // again puch first half of queue into the stack.
    for (int i = 0; i < halfsize; i++)
    {
        s.push(q.front());
        q.pop();
    }
    // interleave the elements of the queue and the stack.
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}
void print(queue<int> &q)
{
    // int length = q.size();
    for (int i = 0; i < q.size(); i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interleave(q);
    print(q);
}