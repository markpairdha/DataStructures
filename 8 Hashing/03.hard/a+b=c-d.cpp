#include<bits/stdc++.h>
using namespace std;

int findLargestd(int arr[],int n)
{
  map<int, pair<int, int> > mp;
  for(int i = 0;i<n;i++)
     for(int j=i+1;j<n;j++)
	    mp[arr[i]+arr[j]] = {i,j};	
  int d = INT_MIN;
  for(int i=0;i<n;i++)
  {
    for(int j = i+1;j<n;j++)
    {
	   int abs_diff = abs(arr[i]-arr[j]);
	   if(mp.find(abs_diff) != mp.end())
	     {
	        pair<int,int> p = mp[abs_diff];
			if(p.first != i && p.second != j && p.first != j && p.second != i)
			   d = max(d,max(arr[i],arr[j])); 	
		 }  
	}
  }
  return d;
}

int main()
{
	int s[] = {2,3,5,7,12};
	int n = sizeof(s)/sizeof(s[0]);
	
	int ans = findLargestd(s,n);
	if(ans == INT_MIN)
	  cout << "No Sol\n";
	else
	  cout << ans << endl;
	return 0;    
}
