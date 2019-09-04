#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printPairs(int A[],int size,int sum)
{
	unordered_map<int> mp;
	for(int i=0;i<size;i++)
	{
		if(mp.find(sum-A[i]) != mp.end())
          cout << " (" << A[i] <<sum-A[i] << ") ";
		mp.insert(A[i]);
	}
}

int main() 
{ 
    int A[] = { 1, 4, 45, 6, 10, 8 }; 
    int n = 16; 
    int arr_size = sizeof(A) / sizeof(A[0]); 
  
    // Function calling 
    printPairs(A, arr_size, n); 
  
    return 0; 
} 
