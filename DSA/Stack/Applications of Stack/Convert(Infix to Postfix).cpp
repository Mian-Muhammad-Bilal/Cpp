#include <iostream>
#include <stack>
using namespace std;
class Conver
{
public:
    int Priority(char alpha)
    {
        if (alpha == '+' || alpha == '-')
            return 1;

        if (alpha == '*' || alpha == '/')
            return 2;

        if (alpha == '^')
            return 3;

        return 0;
    }
    string Convert_Eqn(string infix)
    {
        int i = 0;
        string postfix = "";
        stack<int> s;

        while (infix[i] != '\0')
        {
            if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
            {
                postfix += infix[i];
                i++;
            }
            else if (infix[i] == '(') // if opening bracket then push
            {
                s.push(infix[i]);
                i++;
            }
            else if (infix[i] == ')') // if closing bracket found then keep popping until closing a same opening bracket is not popped
            {
                while (s.top() != '(')
                {
                    postfix += s.top();
                    s.pop();
                }
                s.pop();
                i++;
            }
            else
            {
                while (!s.empty() && Priority(infix[i]) <= Priority(s.top()))
                {
                    postfix += s.top();
                    s.pop();
                }
                s.push(infix[i]);
                i++;
            }
        }
        while (!s.empty())
        {
            postfix += s.top();
            s.pop();
        }
        return postfix;
    }
};
int main()
{
    string infix = "b*a+b-a";
    Conver c;
    cout << "The infix Eqn : " << infix << " \nconverted into postfix : " << c.Convert_Eqn(infix);
    return 0;
}