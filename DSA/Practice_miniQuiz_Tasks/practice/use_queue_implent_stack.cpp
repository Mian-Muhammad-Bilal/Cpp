#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
	queue<int> q1;
	queue<int> q2;
	int N;
	Stack()
	{
		N = 0;
	}
	void push(int val)
	{
		q2.push(val);
		N++;
		while (!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
	}
	void pop()
	{
		N--;
		q1.pop();
	}
	int Top()
	{
		return q1.front();
	}
};

int main()
{
	Stack s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.Top();
	s1.Top();
}