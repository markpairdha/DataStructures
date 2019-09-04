#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<set>
#include<list>
using namespace std;

bool CheckDuplicatesWithinK(int arr[],int n,int k)
{
	set<int> s;
	for(int i=0;i<n;i++)
	{
		if(s.find(arr[i]) != s.end())
		{
			return true;
		}
     s.insert(arr[i]);
     if(i>=k)
      s.erase(arr[i-k]);
	}
	return false;
}

void printpairs(int arr[],int n)
{
	vector<int> v;
	unordered_map<int,bool > mp;
	for(int i=0;i<n;i++)
	{
		if(!mp[abs(arr[i])])
		   mp[abs(arr[i])] = true;
		else
		{
		  v.push_back(abs(arr[i]));
		  mp[abs(arr[i])] = false;
		}   
	}
	if(!v.size()) return 0;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	  cout << " (" << -v[i] << "," << v[i] << ") "; 
}


