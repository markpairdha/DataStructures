#include <iostream>
#include<stack>
using namespace std;

void showstack(stack<int> s)
{
	while(!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
}
int main()
{
  stack<int> s;
  s.push(100);
  s.push(10);
  showstack(s);
  s.pop();
  showstack(s);	
} 

/* 
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)
*/
