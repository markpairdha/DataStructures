#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
int test;
while(test--)
 {
   string str;
   cin >> str;
   int n = str.length(),maxi=0;
   for(int i=0;i<n-1;i++)
   {
   	 int lsum=0,rsum=0,j=i,k=i+1;
   	 while(j>=0 && k<= n-1)
   	 {
   	    lsum += str[j]-'0';
		rsum += str[k]-'0';
		if(lsum == rsum)
		  maxi = max(maxi,j-i+1);	
	   j--,k++;	  
     }
   }
   cout << maxi <<endl;
 }
return  0;
}
