#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int> &st, int x)
{
    // Stack to hold elements temporarily
    stack<int> newSt;

    // Transfer elements from original stack to new stack
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }

    // Push the new element to the bottom
    newSt.push(x);

    // Transfer elements back from new stack to original stack
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }

    return st;
}

int main()
{
    // Create a stack and add some elements
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // Display the original stack
    cout << "Original stack: ";
    stack<int> temp = st;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Push a new element to the bottom of the stack
    st = pushAtBottom(st, 0);

    // Display the modified stack
    cout << "Modified stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}