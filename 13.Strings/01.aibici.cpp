//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int test;
   cin >> test;
   while(test--)
   {
     string s;
     cin >>s;
     int i,n = s.length();
     int acount=0,bcount=0,ccount=0;
     for(i=0;i<n;i++)
     {
         if(s[i] == 'a')
           acount = 1+2*acount;
         else if(s[i] == 'b')
           bcount = acount+2*bcount;
         else if(s[i] == 'c')
           ccount = bcount+2*ccount;
     }
     cout << ccount <<endl;
   }
	return 0;
}
