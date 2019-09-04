#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int counttriplets(int arr[],int n,int m)
{
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++)
     mp[arr[i]] = i;
  int count = 0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
	{
	   if((arr[i] * arr[j] <= m) && (arr[i] * arr[j] != 0) && (m%(arr[i]*arr[j])==0))
	   {
	     int check = m/(arr[i]*arr[j]);
		 auto it = mp.find(check);
		 if(check != arr[i] && check != arr[j] && it != mp.end() && it->second > i && it->second > j)
		   count++;  	
	   }	
	} 	
  }
  return count;		
}

int main()
{
	int arr[] = {1,4,6,2,3,8};
	cout << counttriplets(arr,6,24);
	return 0;
}
