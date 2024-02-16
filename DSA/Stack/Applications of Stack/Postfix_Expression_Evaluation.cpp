#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Solve
{
public:
    int Postfix(string eqn)
    {
        stack<int> temp1;
        int l = eqn.length();
        for (int i = 0; i < l; i++)
        {
            if (eqn[i] >= '0' && eqn[i] <= '9')
            {
                temp1.push(eqn[i]);
            }
            else if (eqn[i] == '+' || eqn[i] == '-' || eqn[i] == '*' || eqn[i] == '/')
            {
                int c; // constant input
                int x = temp1.top();
                temp1.pop();
                int y = temp1.top();
                temp1.pop();
                if (eqn[i] == '+')
                {
                    c = x + y;
                    temp1.push(c);
                }
                else if (eqn[i] == '-')
                {
                    c = x - y;
                    temp1.push(c);
                }
                else if (eqn[i] == '*')
                {
                    c = x * y;
                    temp1.push(c);
                }
                else if (eqn[i] == '/')
                {
                    c = x / y;
                    temp1.push(c);
                }
            }
        }
        return temp1.top(); // solved solution
    }
};
int main()
{
    Solve s;
    string tosolve = "34-";
    cout << s.Postfix(tosolve);
    return 0;
}