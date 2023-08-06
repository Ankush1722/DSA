// #include <iostream>
// using namespace std;

// class queue
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;

// public:
//     // Initialize your data structure.
//     queue(int n)
//     {
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value)
//     {
//         // to dataeck whther queue is full
//         if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
//         {
//             // cout << "Queue is Full";
//             return false;
//         }
//         else if (front == -1) // first element to push
//         {
//             front = rear = 0;
//         }
//         else if (rear == size - 1 && front != 0)
//         {
//             rear = 0; // to maintain cyclic nature
//         }
//         else
//         { // normal flow
//             rear++;
//         }
//         // push inside the queue
//         arr[rear] = value;

//         return true;
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue()
//     {
//         if (front == -1)
//         { // to dataeck queue is empty
//             // cout << "Queue is Empty " << endl;
//             return -1;
//         }
//         int ans = arr[front];
//         arr[front] = -1;
//         if (front == rear)
//         { // single element is present
//             front = rear = -1;
//         }
//         else if (front == size - 1)
//         {
//             front = 0; // to maintain cyclic nature
//         }
//         else
//         { // normal flow
//             front++;
//         }
//         return ans;
//     }
// };

#include<iostream>
#include<stdlib.h>

using namespace std;

class cqueue
{
	int q[5],front,rear;
	
	public:
	
	cqueue()
	{
		front=-1;
		rear=-1;
	}
	
	void push(int x)
	{
		if(front ==-1 && rear == -1)
    	{
        	q[++rear]=x;
    		front=rear;
    		return;
        }
    	
		else if(front == (rear+1)%5)
    	{
        	cout <<"OVERFLOW Occurred"<<endl;
        	return;
    	}
    		
		rear= (rear+1)%5;
    	q[rear]=x;
	}
 
	void pop()
	{
    	if(front==-1 && rear==  -1)
        {
			cout <<"UNDERFLOW Occurred"<<endl;
			return;
        }
        	
		else if( front== rear  )
        {
        	front=rear=-1;
        	return;
        }
        	
		front= (front+1)%5;
    }
 		
	void display()
    {
    	int i;
    		
    	cout<<"CIRCULAR QUEUE => ";
    	if( front <= rear)
    	{
        	for(i=front; i<=rear;i++)
        	{
        		cout<<q[i]<<"\t";
			}
		}
      		
		else
    	{
    		for(i=front;i<=4;i++)
    		{
        		cout<<q[i]<<"\t";
    		}
         		
			for(i=0;i<=rear;i++)
    		{
    			cout<<q[i]<<"\t";
    		}
    	}
    	cout<<endl<<endl;
    }
    	
    void peek()
    {
    	cout<<"Topmost Element => "<<q[front]<<endl;
	}
};
 
int main()
{
 
int ch;
cqueue q1;
while(1)
{
	cout<<"Operations To Be Performed"<<endl;
	cout<<endl;
	cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;
	cout<<"3.Display"<<endl;
	cout<<"4.Peek"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<endl;
	cout<<"Enter Your Choice => ";
	cin >> ch;
	cout<<endl;
	switch(ch)
	{
		case 1:
		{
			cout<<"Enter The Element To Be Inserted => ";
        	cin >> ch;
        	q1.push(ch);
        	cout<<"Element Inserted In The Circular Queue."<<endl;
        	cout<<endl;
			break;
		}
 
		case 2: 
		{
			q1.pop();
			cout<<"Element Deleted"<<endl;
			break;
		}
		
		case 3:
		{
			q1.display();
			break;
		}
		
		case 4:
		{
			q1.peek();
			break;
		}
			
		case 5:
		{
			cout<<"Program Completed"<<endl;
			exit(0);
			break;
		}
		
		default:
		{
			cout<<"Invalid Choice"<<endl;
			break;
		}
	}
}
return 0;
}
