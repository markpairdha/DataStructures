#include<bits/stdc++.h>
using namespace std;

int  LongestIncreasingSubSequence(int arr[],int n)
{
   	int dp[n],i,j;
   	dp[0] = 1;
   	for(i=1;i<n;i++)
   	{
   		dp[i] = 1;
   	  for(j=0;j<i;j++)
		  if(arr[j] < arr[i])
		     dp[i] = max(1+dp[j],dp[i]);	
	}
	return *max_element(dp,dp+n);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin >> arr[i] ;
		cout << LongestIncreasingSubSequence(arr,n) << endl;  
	}
	return 0;
}
