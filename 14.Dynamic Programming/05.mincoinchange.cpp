#include<iostream>
using namespace std;


int mincoinchange(int val[],int n,int k)
{
   int dp[n+1][k+1],i,j;
   memset(dp,0,sizeof(dp));
   for(i=0;i<n;i++)
     dp[0][i] = 1;
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=k;j++)
	 {
		 if(j<val[i-1])
		  dp[i][j] = dp[i-1][j];
		else {
		  dp[i][j] = dp[i-1][j]+dp[i][j-(i-1)]; 	
	 } 	
   }
   return dp[n][k];			
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin >> arr[i];
		int change;
		cin >> change;  
		cout << mincoinchange(arr,n,change) << endl;  
	}
}
