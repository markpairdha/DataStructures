#include<stdio.h>
using namespace std;

void alternatearray(int arr[],int size)
{
   int f = 0,l=size-1;
   sort(arr,arr+size);
   while(l<f)
   {
      cout << arr[f++] << " ";
      cout << arr[l--] << " ";
   }
   if(size%2 != 0)
   {
      cout << arr[i];
   }
   
}

int main()
{
int arr[] = {1,9,2,8,3,7,4,6,5};
int size = sizeof(arr)/sizeof(arr[0]);
alternatearray(arr,size);
}
