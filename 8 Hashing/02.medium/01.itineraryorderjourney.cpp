#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

void printitinerary(map<string,string> &dataset)
{
   map<string,string> reverse;
   string start;
   map<string,string> ::iterator it;
   for(it = dataset.begin() ;it!= dataset.end();it++)
     reverse[it->second] = it->first;	
   for(it = dataset.begin();it!= dataset.end();it++)
   {
   	  if(reverse.find(it->first) == reverse.end())
   	  {
   	      start = it->first;
		  break;	
	  }
   }
   
   if(start.empty()) return;
   
   it = dataset.find(start);
   while(it != dataset.end())
   {
      cout << it->first << "->" << it->second << endl;
	  it = dataset.find(it->second);	
   }   
}



int main()
{
	map<string,string> mp;
    mp["d"] = "e";
    mp["a"] = "b";
    mp["c"] = "d";
    mp["b"] = "c";
    printitinerary(mp);
    return 0;
}
