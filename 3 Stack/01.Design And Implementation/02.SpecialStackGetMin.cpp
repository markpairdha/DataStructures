#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack {
	static const int max = 100;
	int arr[max];
	int top;
	public :
		Stack() {top = -1;}
		bool isEmpty();
		bool isFull();
		int pop();
		void push(int x);
};

bool Stack::isEmpty()
{
	if(top == -1) return true;
	else return false;
}

bool Stack::isFull()
{
	if(top == max-1)
	  return true;
	else
	return false;  
}

int Stack::pop()
{
	if(isEmpty()) abort();
	int x = arr[top];
	top--;
	return x;
}

void Stack::push(int x)
{
	if(isFull())
	{
		cout << "Stack Overflow";
		abort();
	}
	top++;
	arr[top] = x;
}

class SpecialStack: public Stack 
{
	Stack min;
	public :
		int pop();
		void push(int x);
		int getmin();
};


void SpecialStack::push(int x)
{
	if(isEmpty()) 
	{
		Stack::push(x);
		min.push(x);
	}
	else
	{
		Stack::push(x);
		int y = min.pop();
		min.push(y);
		if(x<y) 
		 min.push(x);
		else
		 min.push(y); 
	}
}

int SpecialStack::pop(){
	int x=Stack::pop();
	min.pop();
	return x;
}

int SpecialStack::getmin()
{
	int x = min.pop();
	min.push(x);
	return x;
}

