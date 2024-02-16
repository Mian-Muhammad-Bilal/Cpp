#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
class Bracket_Checker
{
public:
    bool Balanced(string data)
    {
        stack<char> temp;
        for (int i = 0; i < data.length(); i++)
        {
            if (temp.empty())
            {
                temp.push(data[i]);
            }
            else if ((temp.top() == '(' && data[i] == ')') || (temp.top() == '{' && data[i] == '}') || (temp.top() == '[' && data[i] == ']'))
            {
                temp.pop();
            }
            else
            {
                temp.push(data[i]);
            }
        }
        if (temp.empty())
        {
            return true;
        }
        return false;
    }
    void Check(string eqn)
    {
        if (Balanced(eqn))
        {
            cout << "Expresion is Balanced" << endl;
        }
        else
        {
            cout << "\nExpression Not Balanced\n";
        }
    }
};
int main()
{
    Bracket_Checker b;
    string str = "([{}])";
    b.Check(str);
    return 0;
}