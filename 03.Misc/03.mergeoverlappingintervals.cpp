#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Interval {
	public :
		int start,end;
};

bool compare(Interval a,Interval b)
{
	return (a.start < b.start);
}

void mergeIntervals(Interval arr[],int n)
{
	if(n<=0) return;
	stack<Interval> s;
	sort(arr,arr+n,compare);
	s.push(arr[0]);
	for(int i=1;i<n;i++)
	{
	  	
	}
}

int main()
{
	Interval arr[] = {{6,8,},{1,9},{2,4},{4,7}};
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr,n);
	return 0;
}
