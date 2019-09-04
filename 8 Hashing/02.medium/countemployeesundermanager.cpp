#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

void countemployees(map<string,string> &mp)
{
	map<string,string> reverse;
	map<string,string> ::iterator it;
	map<string,int> cmp;
	for(it = mp.begin() ;it != mp.end();it++)
		reverse[it->second] = it->first;
	
	for(it = mp.begin();it != mp.end();it++)
	{
      if(strcmp(it->second,reverse.find(it->first)))
         cmp[it->first]++;	
	}	
	for(it = cmp.begin();it != cmp.end();it++)
	{
		cout << it->first << it->second << endl;
	}
}
int main()
{
	map<string,string> mp;
	mp["A"] = "C";
	mp["B"] = "C";
	mp["C"] = "F";
	mp["D"] = "E";
	mp["E"] = "F";
	mp["F"] = "F";
	
	countemployees(mp);
}
