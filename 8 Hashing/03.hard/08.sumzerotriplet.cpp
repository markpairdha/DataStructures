#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

void findTriplets(int arr[],int n)
{
   bool found = false;
   sort(arr,arr+n);
   for(int i=0;i<n-1;i++)
   {
      int l=i+1;
	  int r=n-1;
	  int x=arr[i];
	  while(l<r)
	  {
	    if(x+arr[l]+arr[r]==0)
		{
		  cout << x << arr[l] << arr[r] << endl;
		  l++;
		  r--;
		  found = true;	
		} 	
		else if(x+arr[l]+arr[r] < 0)
		  l++;
		else
		  r--;  
	  }	
    }
	if(!found)
	  cout << "No Triplet Found" << endl;	
}

void findTriplets(int arr[],int n)
{
	bool found = false;
	for(int i=0;i<n-1;i++)
	{
		unordered_set<int,int> mp;
		for(int j=i+1;j<n;j++)
		{
			int x = -(arr[i]+arr[j]);
			if(s.find(x) != s.end())
			{
				cout << x << arr[i] << arr[j] << endl;
				found = true;
			}
			else
			 s.insert(arr[j]);
		}
	}
}

int main() 
{ 
    int arr[] = {0, -1, 2, -3, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    findTriplets(arr, n); 
    return 0; 
} 
