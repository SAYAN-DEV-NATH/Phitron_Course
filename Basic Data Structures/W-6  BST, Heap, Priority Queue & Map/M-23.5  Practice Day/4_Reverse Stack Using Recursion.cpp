/* 

void reverseStack(stack<int> &stack) {
   queue<int> q;
   while(!stack.empty()){
       q.push(stack.top());
       stack.pop();
   }
   while(!q.empty()){
       stack.push(q.front());
       q.pop();
   }
} 

*/