#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int calculate(int a[],int n)
{
	int *maximum = max_element(a,a+n);
	int freq[*maximum+1] = {0};
	for(int i=0;i<n;i++)
	{
		freq[a[i]]++;
	}
	int answer = 0;
	for(int i=0;i<(*maximum)+1;i++)
	{
		answer += freq[i]*(freq[i]-1);
	}
	return answer/2;
}

int main()
{
	int a[] = {1,2,1,2,4};
	int n = sizeof(a)/sizeof(a[0]);
	cout << calculate(a,n);
	return 0;
}
