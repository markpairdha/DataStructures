#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TwoStacks{
	int *arr;
	int size;
	int top1,top2;
	public :
		TwoStacks(int n)
		{
			size = n;
			arr = new int[n];
			top1 = -1;
			top2 = n-1;
		}
		
		void push1(int x)
		{
			if(top1 < top2-1)
			arr[top1++]  = x;
		}
		
		void push2(int x)
		{
			if(top1 < top2 -1)
			arr[top2--] = x;
		}
		
		int pop1()
		{
			if(top1 >=0)
			{
				int x = arr[top1];
				top1--;
				return x;
			}
		}
		int pop2()
		{
			if(top2 < size)
			{
				int x = arr[top2];
				top2--;
				return x;
			}
		}
};


int main()
{
	TwoStacks ts(2);
	ts.push1(5);
	ts.push2(2);
	ts.push2(5);
	ts.push1(10);
}
