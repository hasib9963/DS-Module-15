#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    if (c == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (c == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (c == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution sol;
    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (sol.isValid(s))
    {
        cout << "The string is containing Bracket." << endl;
    }
    else
    {
        cout << "The string doesn't containing any Bracket or not closed correct order." << endl;
    }

    return 0;
}
