#include<iostream>
using namespace std;

bool subsetsum(int val[],int sum,int n)
{
   bool dp[n+1][sum+1];
   for(int i=0;i<=n;i++)
     dp[i][0] = true;
   for(int i=1;i<=sum;i++)
     dp[0][i] = false;  
   for(int i=1;i<=n;i++)
   {
      for(int j = 1;j<=sum;j++)
	  {
	     	if(j<val[i-1])
	     	  dp[i][j] = dp[i-1][j] ;
			else if(j>=val[i-1])  
			  dp[i][j] = dp[i-1][j] || dp[i-1][j-val[i-1]];
	  }	
   }
   return dp[n][sum];	
}

int main()
{
	int set[] = {2,3,7,8,10};
	int sum = 11;
	int size = sizeof(set)/sizeof(set[0]);
	(subsetsum(set,sum,size)) ? cout << "True" : cout << "False";
	return 0; 
}
