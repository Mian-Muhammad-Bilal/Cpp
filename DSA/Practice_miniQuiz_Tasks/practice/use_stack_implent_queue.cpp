#include <bits/stdc++.h>
#include <type_traits>
using namespace std;
class Queue
{
private:
	stack<int> S1, S2;

public:
	void push(int data)
	{
		S1.push(data);
	}
	int pop()
	{
		if (S1.empty() and S2.empty())
		{
			return -1;
		}
		if (S2.empty())
		{
			while (!S1.empty())
			{
				S2.push(S1.top());
				S1.pop();
			}
		}
		int top = S2.top();
		S2.pop();
		return top;
	}
	void Reverse()
	{
		stack<int> temp = S1;
		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		cout << endl;
	}
};
int main()
{
	Queue q;
	q.push(1);
	q.push(5);
	q.push(5);
	q.Reverse();
}