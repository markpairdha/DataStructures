#include<bits/stdc++.h>
using namespace std;

int minSwapToSort(int arr[],int n)
{
  pair<int,int> arrPos[n];
  int i=0;
  for(i=0;i<n;i++)
  {
	  arrPos[i].first = arr[i];
	  arrPos[i].second = i;
   }
   sort(arrPos,arrPos+n);
   vector<bool> vis(n,false);
   int ans = 0;
   for(i=0;i<n;i++)
   {
	   if(vis[i] || arrPos[i].second == i)
		  continue;
	   int cycle_time = 0;
	   int j=i;
	   
	   while(!vis[j])
	   {
		   	vis[j] = 1;
		   	j = arrPos[j].second;
		   	cycle_time++;
	    }
		ans += (cycle_time-1);	 	 	
	} 
	return ans;
}

int minSwapToMakeArraySame(int a[],int b[],int n)
{
  map<int,int> mp;
  int i;
  for(i=0;i<n;i++) 
     mp[b[i]] = i;
  for(i=0;i<n;i++)
     b[i] = mp[a[i]];
  return minSwapToSort(b,n);   	    
}

int main()
{
	int a[] = {3,6,4,8};
	int b[] = {4,6,8,3};
	int n = sizeof(a)/sizeof(a[0]);
	cout << minSwapToMakeArraySame(a,b,n);
	return 0;
}
