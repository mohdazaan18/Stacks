/*
    Time Complexity: O(N^2)
    Space Complexity: O(N)

    Where N is the number of elements in Stack.
*/

void insertAtBottom(stack<int> &stack, int ele) {
    if (stack.empty()) {
        stack.push(ele);
        return;
    }

    int top = stack.top();
    stack.pop();

    insertAtBottom(stack, ele);

    stack.push(top);
}

void reverseStack(stack<int> &stack) {
    if (stack.empty()) {
        return;
    }

    int top = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack, top);
}
