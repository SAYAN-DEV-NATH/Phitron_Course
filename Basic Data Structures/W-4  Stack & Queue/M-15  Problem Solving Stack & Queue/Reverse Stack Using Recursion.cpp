// void reverseStack(stack<int> &s)
// {
//     if (s.empty())
//         return;
//     int x = s.top();
//     s.pop();

//     reverseStack(s);

//     stack<int> c;
//     while (!s.empty())
//     {
//         c.push(s.top());
//         s.pop();
//     }

//     c.push(x);
//     while (!c.empty())
//     {
//         s.push(c.top());
//         c.pop();
//     }
// }