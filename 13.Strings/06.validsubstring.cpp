//Mark Sathish Pairdha
//https://auth.geeksforgeeks.org/user/markpairdha/profile
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

int substring(string str)
{
  int* visited = new int[sizeof(int)*NO_OF_CHARS];
  int max=1,curr=1,n=str.length(),prev;
  for(int i=0;i<NO_OF_CHARS;i++)
    visited[i] = -1;
  visited[str[0]] = 0;
  for(int i=1;i<n;i++)
  {
     prev = visited[str[i]];
     
     if(prev == -1 || i-curr > prev)
       curr++;
     else
       {
           if(curr > max)
             max = curr;
         curr = i-prev;    
       }
    visited[str[i]] = i;
  }
  if(curr>max)
    max = curr;
  free(visited);
  return max;
}

int main()
 {
   int test;
   cin >> test;
   while(test--)
   {
     string s;
     cin >> s;
     cout << substring(s) << endl;
   }
	return 0;
}




#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
 {
	int test ;
	cin>>test ;
	while(test--){
	    string s ;
	    cin>>s ;
	    int i = 0 ;
	    int j = 0 ;
	    set<char> hash ;
	    int maxLen = 0 ;
	    while(j<s.length()){
	        if(!hash.count(s[j])){
	            hash.insert(s[j]);
	            j++;
	            maxLen = max(maxLen,j-i);
	        }else{
	            hash.erase(s[i]);
	            i++;
	        }
	    }
	    cout<<maxLen<<endl;
	}
	return 0;
}
