#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
            {
                s1.push(c);
            }
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
            {
                s2.push(c);
            }
        }
        return s1 == s2;
    }
};

int main()
{
    Solution sol;
    string s = "ab#c";
    // string t = "ad#c";
    string t = "adc";

    if (sol.backspaceCompare(s, t))
    {
        cout << "The strings are equal after processing backspaces." << endl;
    }
    else
    {
        cout << "The strings are not equal after processing backspaces." << endl;
    }

    return 0;
}
