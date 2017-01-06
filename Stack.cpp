#include <bits/stdc++.h>
using namespace std;

int Stack[100], ind;

void push (int x) {
    ++ind;
    Stack[ind] = x;
}

bool isEmpty() {
    if (ind >= 1) return false;
            else  return true;
}

void pop () {
    Stack[ind] = 0;
    --ind;
}

int top () {
    return Stack[ind];
}
int main()
{
    ind = 0;
    
    push(1);
    push(2);

    if (! isEmpty()) cout<<top();

    pop();
    pop();

    return 0;
}
