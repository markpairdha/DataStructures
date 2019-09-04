#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int countindexpairs(int arr[],int n)
{
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++) 
	  mp[arr[i]]++;
	int ans=0;  
	unordered_map<int,int> ::iterator it;
	for(it = mp.begin();it != mp.end();it++)
	{
	    int freq = it->second;
		ans += (freq*(freq-1))/2; 	
	}  
	return ans;
}
int main()
{
	int arr[] = {1,1,1,1,1,2,2,2,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << countindexpairs(arr,size) << endl;
	return 0;
}
