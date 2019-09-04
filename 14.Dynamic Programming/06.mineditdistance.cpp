#include<iostream>
#include<string.h>
using namespace std;

int min(int x,int y,int z)
{
	return min(x,min(y,z));
}
int mineditdistance(string s1,string s2,int n1,int n2)
{
	int dp[n1+1][n2+1],i,j;
	 for(i=0;i<=n1;i++)
	 {
	 	for(j=0;j<=n2;j++)
	 	{
	 	   	if(i==0 ) dp[i][j] = j;
	 	   	else if(j==0) dp[i][j] = i;
	 	   	else if(s1[i-1] == s2[j-1])
	 	   	  dp[i][j] = dp[i-1][j-1];
	 	   	else
			dp[i][j] = 1+min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);  
		}
	 }
	 return dp[n1][n2];
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		int n1 = s1.length(),n2 = s2.length();
		cout << mineditdistance(s1,s2,n1,n2) << endl;
	}
	return 0;
}
