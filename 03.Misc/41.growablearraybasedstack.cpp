/*
#include<iostream>
using namespace std;

int top = -1;
int length = 0;
#define BOUND 4

int * create_new(int* a)
{
	int* new_a = new int[length+BOUND];
	for(int i=0;i<length;i++)
	   new_a = a[i];
	length += BOUND;
	return new_a;   
}

int* push(int* a,int element)
{
	if(top == lenght-1)
	  a = create_new(a);
	a[++top] = element;
	return a;  
}

void pop(int *a)
{
	top--;
}

void display(int* a)
{
	if(top == -1)
	  cout << "stack empty";
	else
	  cout << "stack";
	  for(int i=0;i<=top;i++)
	    cout << a[i] << " ";
	  cout << endl;  
}

int main()
{
	int *a = create_new(a);
	a = push(a,1);
	a = push(a,2);
	a = push(a,3);
	a = push(a,4);
	display(a);
	a = push(a,5);
	a = push(a,6);
	a = push(a,7);
	a = push(a,8);
	display(a);
	a = push(a,10);
	display(a);
	return 0;	
} */

#include<iostream>
using namespace std;
#define BOUND 4
int top = -1;
int length = 0;

int* create_new(int* a)
{
	int* new_a = new int[length+BOUND];
	for(int i=0;i<length;i++)
	  new_a[i] = a[i];
	length += BOUND;
	return new_a;  
}

int* push(int a[],int ele)
{
	if(top == length-1)
	 a =  create_new(a);
	a[top++] = element;
	return a; 
}

void pop(int a[])
{
	top--;
}

void display(int a[])
{
	if(top == -1) return;
	else
	{
		for(int i=0;i<length;i++)
		  cout << a[i] << " ";
		cout << endl;  
	}
}
int main()
{
	int *a = create_new(a);
	a = push(a,1);
	a = push(a,2);
	a = push(a,3);
	a = push(a,4);
	display(a);
	a = push(a,5);
	a = push(a,6);
	a = push(a,7);
	a = push(a,8);
	display(a);
	a = push(a,10);
	display(a);
	return 0;	
}
