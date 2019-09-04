#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#define ll long long
using namespace std;
/*
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		ll n,e;
		cin >> n >> e;
		vector<ll> v1[2*e],v2[2*e];
		ll from,to;
		for(ll i=0;i<e;i++)
		{
			cin >> from >> to;
			v1[from].push_back(to);
		}
		for(ll i=0;i<e;i++)
		{
			cin >> from >> to;
			v1[from].push_back(to);
		}
		stack<ll> s1,s2;
		s1.push(1);
		s2.push(1);
		ll temp = 0;
		while(!s1.empty() && !s2.empty())
		{
			if(s1.top() != s2.top())
			{
				cout << "0\n";
				temp = 1;
				break;
			}
			ll top1 = s1.top();s1.pop();
			ll top2 = s2.top();s2.pop();
			for(ll i=0;i<v1[top1].size();i++)
			  s1.push(v1[top1][i]);
			for(ll i=(v2[top2].size())-1;i>=0;i--)
			  s2.push(v2[top2][i]);  
		}
		if(temp == 0)
		  cout << "1\n";
	}
	return 0;
}*/

int main()
{
	
}
