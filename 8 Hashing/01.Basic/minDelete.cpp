#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int minDelete(int arr[],int n)
{
  map<int,int> mp;
  for(int i=0;i<n;i++)
     mp.insert[arr[i]]++;
  int maxi = INT_MAX;
  map<int,int> ::iterator it;
  for(it = mp.begin();it != mp.end();it++)
  	 maxi = max(maxi,it->second);
  return maxi;	    	
}

int main()
{
	int arr[] = {4, 3, 4, 4, 2, 4}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << minDelete(arr, n); 
    return 0;
}
