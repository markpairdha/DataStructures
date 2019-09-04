#include<iostream>
using namespace std;

int knapsack(int W,int wt[],int val[],int n)
{
  int i,j;
  int dp[n+1][W+1];
  for(i=0;i<=n;i++)
  {
     for(j=0;i<=W;j++)
	 {
        if(i==0 || j == 0)
		  dp[i][j] = 0;
		else if(wt[i-1] <= j)
		   dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
		else
		  dp[i][j] = dp[i-1][j];     	 	
     }  	
  }	
  return dp[n][W];
}

int main()
{
	int val[] = {1,4,5,7};
	int wt[] = {1,3,4,5};
	int W = 7;
	int n = sizeof(val)/sizeof(val[0]);
	cout << knapsack(W,wt,val,n) << endl;
}
