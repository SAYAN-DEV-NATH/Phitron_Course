// #include <bits/stdc++.h>
// stack<int> pushAtBottom(stack<int> &myStack, int x)
// {
//     stack<int> s;
//     while (!myStack.empty())
//     {
//         int y = myStack.top();
//         myStack.pop();
//         s.push(y);
//     }

//     s.push(x);

//     while (!s.empty())
//     {
//         int y = s.top();
//         s.pop();
//         myStack.push(y);
//     }

//     return myStack;
// }