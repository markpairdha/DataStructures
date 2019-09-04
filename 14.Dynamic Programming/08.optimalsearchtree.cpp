#include<bits/stdc++.h>
using namespace std;

int optimalsearchtree(int keys[],int freq[],int n)
{
   int cost[n][n];
   int i,j,L,k,c;
   for(i=0;i<n;i++)
     cost[i][i] = 0;
   for(L=2;L<n;L++)
   {
   	  for(i=0;i<=n-L+1;i++)
   	  {
   	     j = n-L+1;
		 cost[i][j] = INT_MAX;
		 for(k=i;k<=j;k++)
		 {
		    c = ((k>i)?cost[i][k-1]:0) + ((k<j)?cost[k+1][l]:0);
			if(c<cost[i][j])
			  cost[i][j] = c;	
		 }		
	  }
	}	 	
	return cost[0][n-1];
}

int main()
{
	int keys[] = {10,12,20};
	int freq[] = {34,8,50};
	int n = sizeof(keys)/sizeof(keys[0]);
	cout << optimalsearchtree(keys,freq,n) << endl;
}
