#include<bits/stdc++.h>
using namespace std;

void func(int a[],int n)
{
  sort(a,a+n);
  for(int i = n-1;i>=n/2;i--)
  {
     cout << a[i] << " ";
  }
}
int main()
{
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  func(arr,n);
  return 0;
}
