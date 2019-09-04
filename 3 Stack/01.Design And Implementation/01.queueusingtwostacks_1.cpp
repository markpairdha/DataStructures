#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct Queue {
	stack<int> s1,s2;
	
	void enQueue(int x)
	{
		while(!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
	    while(!s2.empty())
	    {
	    	s1.push(s2.top());
	    	s2.pop();
		}
	}
	
	int deQueue()
	{
		if(s1.empty()) exit(0);
		int x = s1.top();
		s1.pop();
		return x;
	}
};

struct Queue1 {
	stack<int> s1,s2;
	
	void enQueue(int x)
	{
		s1.push(x);
	}
	
	int deQueue()
	{
		if(s1.empty()) exit(0);
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x = s2.top();
		s2.pop();
		return x;
	}
};

struct Queue2 {
	stack<int> s;
	
	void enQueue(int x)
	{
		s.push(x);
	}
	
	int deQueue()
	{
		if(s.empty()) exit(0);
		
		int x = s.top();
		s.pop();
		
		if(s.empty())
		   return x;
		int item = deQueue();
		s.push(x);
		return item;   
	}
};

int main()
{
    Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	
	cout << q.deQueue() << endl;	
}
