//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
 {
   int test;
   cin >> test;
   while(test--)
   {
     string s;
     cin >> s;
     int flag = 0,i=0;
     unordered_map<char,int> mp;
     int max=0;
     for(i=0;i<s.length();i++)
     {
       mp[s[i]]++;
       if(max < mp[s[i]])
         max = mp[s[i]];
     }
    if(max <= (s.length()-max))
      flag = 1;
    cout << flag << endl; 
   }
	return 0;
}
