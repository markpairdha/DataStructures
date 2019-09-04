#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Stack {
	queue<int> q1,q2;
	int curr_size;
	public :
		Stack() { curr_size = 0; }
		
		void pop()
		{
			if(q1.empty()) return;
			
			while(q1.size() != 1)
			{
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
			curr_size--;
		}
		
		void push(int x)
		{
			q1.push(x);
			curr_size++;
		}
		
		int top()
		{
			if(q1.empty()) return -1;
			while(q1.)
		}
		
		int size()
		{
			return curr_size;
		}
		
};
int main()
{
	
}
