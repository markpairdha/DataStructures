#include<iostream>
using namespace std;


int matrixchainmultiplication(int p[],int n)
{
  	int dp[n][n];
  	for(int i=1;i<n;i++)
  	  dp[i][i] = 0;
  	for(int L=2;L<n;L++)
	  {
	     for(int i=1;i<n-L+1;i++)
		 {
		    j=i+L-1;
			dp[i][j] = INT_MAX;
			for(k=i;k<j;k++)
			{
			  int q = dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j];
			  if(q<dp[i][j])
			    dp[i][j] = q;	
			}	
		 }	
	  }
	  return dp[1][n-1];  
}

int matrixchainmultiplication1(int mat[],int n)
{
  int dp[n][n];
  for(int i=1;i<n;i++)
    dp[i][i] = 0;
  int L,i,j,k;
  for(L=2;L<n;L++)
  {
      	for(i=1;i<n-L+1;i++)
      	{
      	   j = i-L+1;
		   dp[i][j] = INT_MIN;
		   for(k=i;k<j;k++)
		   {
		      int q = dp[i][k]+dp[k+1][j]+p[i-1]*p[j]*p[k];
			  if(q<dp[i][j])
			     dp[i][j] = q;	
		   }	 	
		}
  }		
  return dp[1][n-1];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >>n;
		int mat[n];
		for(int i=0;i<n;i++)
		  cin >> mat[i];
		cout << matrixchainmultiplication(mat,n) << endl;  
	}
}
