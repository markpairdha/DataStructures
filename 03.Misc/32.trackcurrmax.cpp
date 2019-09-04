#include<iostream>
#include<stack>
using namespace std;

class StackWithMax {
		stack<int> main;
		stack<int> track;
		public :
			void push(int x)
			{
				main.push(x);
				if(main.size() == 1)
				{
					track.push(x);
					return;
				}
				if(x>track.top())
				{
					track.push(x);
				}
				else
				  track.push(track.top());
			}
			
			int getMax()
			{
				return track.top();
			}
			int pop()
			{
				main.pop();
				track.pop();
			}
};


int main()
{
	StackWithMax s; 
    s.push(20); 
    cout << s.getMax() << endl; 
    s.push(10); 
    cout << s.getMax() << endl; 
    s.push(50); 
    cout << s.getMax() << endl; 
    return 0;
}
