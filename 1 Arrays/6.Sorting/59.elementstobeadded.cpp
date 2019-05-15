//using hashing O(MAX-MIN+1) TIME 
//Mark Sathish Pairdha
//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int test;
   cin >> test;
   while(test--) {
     int i,n;
     cin >> n;
     int arr[n];
     for(i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     int min = INT_MAX,max = INT_MIN,count=0;
     unordered_set<int> map;
     for(i=0;i<n;i++)
     {
         map.insert(arr[i]);
         if(min > arr[i])
            min = arr[i];
         if(max < arr[i])
            max = arr[i];
     }
     for(i=min;i<=max;i++)
     {
         if(map.find(arr[i]) == map.end())
            count++;   
     }
     cout << count << endl;
   }
	return 0;
}



// using sorting
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 {
   int test;
   cin >> test;
   while(test--) 
   {
       int n,i;
       cin >> n;
       int arr[n];
       for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
       sort(arr,arr+n);
       int count=0;
       for(i=0;i<n-1;i++)
       {
           if(arr[i] != (arr[i+1]-1) && arr[i] != arr[i+1])
             count += arr[i+1]-arr[i]-1;
       }
       cout << count << endl;
   }
	return 0;
}
