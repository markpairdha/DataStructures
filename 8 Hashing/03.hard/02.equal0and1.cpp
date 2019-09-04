#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void findsubarray(int arr[],int n)
{
	int i,j,sum=0,start=0,max=0;
	for(int i=0;i<n-1;i++)
	{
		sum = (arr[i] == 0) ? -1 : 1;
		for(j=i+1;j<n;j++)
		{
			(arr[j]==0) ? (sum += -1) : (sum += 1);
		
			if(sum == 0 && max < j-i+1)
			{
				start = i;
				maxsize = j-i+1;
			}
		}
		cout << start << "to" << maxsize << endl;
	}
}

void hashingsubarray(int arr[],int n)
{
   int maxsize = -1,startindex;
   int sumleft[n];
   int min,max,i;
   sumleft[0] = ((arr[0]==0)? -1:1);
   min = max = arr[0];
   for(i=1;i<n;i++)
   {
   	 sumleft[i] = sumleft[i-1] + ((arr[i]==0)? -1 : 1);
   	 if(sumleft[i]<min) min = sumleft[i];
   	 if(sumleft[i]>max) max = sumleft[i];
   }
}

int main()
{
	int arr[] = {1,0,0,1,0,1,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	findsubarray(arr,size);
	hashingsubarray(arr,size);
	return 0;
}

