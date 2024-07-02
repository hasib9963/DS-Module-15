#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &s) {
    // Base case: If stack is empty, return
    if (s.empty())
        return;

    // Remove the top element
    int x = s.top();
    s.pop();

    // Recursively reverse the remaining stack
    reverseStack(s);

    // Temporary stack to hold elements
    stack<int> cp;

    // Transfer elements from original stack to temporary stack
    while (!s.empty()) {
        cp.push(s.top());
        s.pop();
    }

    // Push the removed element to the temporary stack
    cp.push(x);

    // Transfer elements back from temporary stack to original stack
    while (!cp.empty()) {
        s.push(cp.top());
        cp.pop();
    }
}

int main() {
    // Create a stack and add some elements
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    // Display the original stack
    cout << "Original stack: ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the stack
    reverseStack(s);

    // Display the reversed stack
    cout << "Reversed stack: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
