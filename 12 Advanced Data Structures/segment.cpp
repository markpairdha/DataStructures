#include<bits/stdc++.h>
using namespace std;
#define ll int
int SearchSegment(int st[],int low,int high,int qlow,int qhigh,int pos)
{
	if(qlow <= low && qhigh >= high) return st[low];
	if(qlow < low || qhigh > high) return INT_MAX;
	int mid = low+(high-low)/2;
	return min(SearchSegment(st,low,mid,qlow,qhigh,2*pos+1),SearchSegment(st,mid+1,high,qlow,qhigh,2*pos+2));
}
int BuildSegmentTree(int a[],int st[],int low,int high,int pos)
{
	if(low == high)
	  st[pos] = a[low];
	  return a[low];
	int mid = low+(high-low)/2;
	st[pos] = min(BuildSegmentTree(a,st,low,mid,2*pos+1),BuildSegmentTree(a,st,mid+1,high,2*pos+2));
	return st[pos];  
}

int *constructtree(int *in,int n)
{
	int x = (int)(ceil(log2(n)));
	int len = 2*(int)pow(2,x)-1;
	int *st = new int[len];
	BuildSegmentTree(in,st,0,n-1,0);
	return st;
}
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n];
		for(ll i=0;i<n;i++)
		  cin >> a[i];
		int *st = constructtree(a,n);  
		int low,high;
		cin >> low >> high;
		cout << SearchSegment(st,0,n-1,low,high,0) << endl;  
	}
	return 0;
}
