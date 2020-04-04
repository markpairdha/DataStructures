//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void rev(ll n)
{
    if(n <= 0) return;
    cout << n%10;
    rev(n/10);
}

int main()
 {
   int test;
   cin >> test;
   while(test--)
   {
     ll n;
     cin >> n;
     while(n%10 == 0)
            n /= 10;
     rev(n);
     cout << endl;
   }
	return 0;
}
