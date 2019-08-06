//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern(string arr)
{
  int curr_max=0,last_entry=0,j=0;
  for(int i=0;i<arr.length();i++)
  {
      int noofD=0;
      switch(arr[i])
      {
          case 'I' :
          {
             j=i+1;
             while(arr[j]=='D' && j<arr.length())
             {
                 j++;
                 noofD++;
             }
             
             if(i==0)
             {
                 curr_max=noofD+2;
                 cout << ++last_entry << curr_max;
                 last_entry = curr_max;
             }
             else
             {
                 curr_max += noofD+1;
                 last_entry = curr_max;
                 cout << last_entry;
             }
             for(int k=0;k<noofD;k++)
               cout << --last_entry;
          }break;
          
          case 'D' :
          {
              if(i==0)
              {
                  j= i+1;
                  while(arr[j] =='D' && j<arr.length())
                  {
                      noofD++;
                      j++;
                  }
                  curr_max = noofD+2;
                  cout << curr_max << curr_max-1;
                  last_entry = curr_max-1;
              }
              else
              {
                  cout << last_entry-1;
                  last_entry--;
              }
          }break;
      }
  }cout << endl;
}
int main()
 {
   int test;
   cin >> test;
   while(test--) 
   {
      string s;
      pattern(s);
   }
	return 0;
}
