//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// rotate(arr,arr+n-1,arr+n);
int main()
 {
   int test;
   cin >> test;
   while(test--) {
   int n,i;
   cin >> n;
   int arr[n];
   for(i=0;i<n;i++)
    cin >> arr[i];
   int x = arr[n-1];
   for(i=n-1;i>0;i--)
     arr[i] = arr[i-1];
   arr[0] = x;
   for(i=0;i<n;i++)
     cout << arr[i] << " ";
   cout <<"\n";
   }
	return 0;
}
