#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

bool countpairs(int arr[],int n,int k)
{
	if(n & 1 || n==0) return false;
     map<int,int> mp;
	for(int i=0;i<n;i++)
	  mp[arr[i]%k]++;
	for(int i=0;i<n;i++)
	{
	  int rem = arr[i]%k;
	  
	  /*if(2*rem == k)
	  {
	  	if(mp[rem]%2 != 0)
	  	  return false;
	  }*/
	   if(rem == 0)
	  {
	  	if(mp[rem] & 1) 
	  	  return false;
	  }
	   else if(mp[rem] != mp[k-rem])
	     return false;	
      		    
	}  
	return true;
}

int main()
{
	int arr[] = {80,90,75,65,100,200,282,288} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 10;
	countpairs(arr,n,k) ? cout << "True" : cout << "False";
	return 0;
}
