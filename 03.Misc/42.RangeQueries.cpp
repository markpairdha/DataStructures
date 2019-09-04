#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

void constructBlanceArray(int BOP[],int BCP[],char* str,int n)
{
  stack<int> stk;
  int result = 0;
  for(int i=0;i<n;i++)
  {
    if(str[i] == '(')
	  stk.push(i);
	else
	{
		if(!stk.empty())
	    {
	    	BCP[i] = 1;
	    	BOP[stk.top()] = 1;
	    	stk.pop();
 		}
 		else
 		  BCP[i] = 0;
    }  	
  }	
  for(int i=1;i<n;i++)
  {
  	BCP[i] += BCP[i-1];
  	BOP[i] += BOP[i-1];
  }
}

int query(int BOP[],int BCP[],int s,int e)
{
	if(BOP[s-1] == BOP[s])
	{
		return (BCP[e]-BOP[s])*2;
	}
	else
	{
		return (BCP[e]-BOP[s]+1)*2;
	}
}

int main()
{
	char str[] = "())(())(())(";
	int n = strlen(str);
	
	int BCP[n+1] = {0};
	int BOP[n+1] = {0};
	constructBlanceArray(BOP,BCP,str,n);
	
	int startIndex = 5, endIndex = 11;
	cout << "Maximum Length Correct Bracket"
            " Subsequence between "
         << startIndex << " and " << endIndex << " = "
         << query(BOP, BCP, startIndex, endIndex) << endl; 
}
