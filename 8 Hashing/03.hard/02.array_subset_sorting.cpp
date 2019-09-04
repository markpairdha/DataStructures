#include<bits/stdc++.h>
using namespace std;

void exchange(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[],int low,int high)
{
	int pivot = a[high];
	int pindex = (low-1);
	int j;
	for(j=low;j<=high-1;j++)
	{
		if(a[j] <= pivot)
		{
			pindex++;
			exchange(&a[pindex+1],&a[high]);
		}
	}
	exchange(&a[pindex+1],&a[high]);
	return (pindex+1);
}

void quicksort(int A[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot = partition(A,low,high);
		quicksort(A,low,high-1);
		quicksort(A,low+1,high);
	}
}

bool issubset(int arr1[],int arr2[],int m,int n)
{
	
}
int main()
{
	int arr1[] = {11, 1, 13, 21, 3, 7}; 
    int arr2[] = {11, 3, 7, 1}; 
  
    int m = sizeof(arr1)/sizeof(arr1[0]); 
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    if(issubset(arr1,arr2,m,n))
    {
    	cout << "is a subset";
	}
	else
	   cout << "not subset";
}
