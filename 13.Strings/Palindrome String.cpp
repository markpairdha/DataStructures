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
     string a,b;
     int n;
     cin >> n;
     cin >> b;
     a = b;
     reverse(a.begin(),a.end());
     if(a == b) cout << "Yes" << endl;
     else cout << "No" << endl;
   }
	return 0;
}
