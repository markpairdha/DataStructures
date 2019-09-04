#include<bits/stdc++.h>
using namespace std;

int printPairs(int a[],int size,int sum)
{
	sort(a,a+n);
	int i=0,j=size-1;
	while(i<j)
	{
		if(a[i]+a[j] == sum)
		  return 1;
		else if(a[i]+a[j] < sum)
		  i++;
		else
		  j--;  
	}
	return 0;
}

bool printpairs(int a[],int size;int sum)
{
	unordered_set<int> us;
	for(int i = 0;i<size;i++)
	{
		int temp = sum - arr[i];
		if(us.find(temp) != us.end())
		  return true;
		
		us.insert(arr[i]);  
	}
}
int main()
{
	
    int A[] = {1, 4, 45, 6, 10, 8}; 
    int n = 16; 
    int arr_size = sizeof(A)/sizeof(A[0]); 
  
    // Function calling 
    printPairs(A, arr_size, n); 
  
    return 0; 
}
