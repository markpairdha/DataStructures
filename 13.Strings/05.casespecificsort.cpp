//Mark Sathish Pairdha
//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main()
 {
   int test;
   cin >> test;
   while(test--)
   {
      int n,i;
      string s;
      cin>>n;
      cin >> s;
      vector<char> vs;
      vector<char> vl;
      for(i=0;i<n;i++)
      {
          if(s[i]>='a' && s[i]<='z')
            vs.push_back(s[i]);
          else
            vl.push_back(s[i]);
      }
      sort(vs.begin(),vs.end());
      sort(vl.begin(),vl.end());
      int j=0,k=0;
      for(i=0;i<n;i++)
      {
          if(s[i]>='a' && s[i]<='z')
           {
               s[i]=vs[j];
               j++;
           }
          else
          {
            s[i]=vl[k];
            k++;
          }
      } cout <<s<< endl;
   }
	return 0;
}
