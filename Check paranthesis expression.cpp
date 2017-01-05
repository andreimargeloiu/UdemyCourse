#include <bits/stdc++.h>

using namespace std;

char input[1000];
int Stack[1000], ind;

void push (int x) {
    Stack[++ind] = x;
}

bool isEmpty() {
    if (ind > 0) return false;
            else return true;
}

bool verify (char input[]) {
    ind = 0;
    int n = strlen(input);

    for (int i=0; i<n; ++i) {
        if (input[i] == '(') push(1);
        if (input[i] == '[') push(2);
        if (input[i] == '{') push(3);

        if (input[i] == ')') {
            // if the stack is empty, or the last parenthesis is different
            // than the one we are closic, then the input is wrong
            if (isEmpty() || Stack[ind] != 1) return false;
            else {
                Stack[ind] = 0;
                --ind;
            }
        }
        if (input[i] == ']') {
            // if the stack is empty, or the last parenthesis is different
            // than the one we are closic, then the input is wrong
            if (isEmpty() || Stack[ind] != 2) return false;
            else {
                Stack[ind] = 0;
                --ind;
            }
        }
        if (input[i] == '}') {
            // if the stack is empty, or the last parenthesis is different
            // than the one we are closic, then the input is wrong
            if (isEmpty() || Stack[ind] != 3) return false;
            else {
                Stack[ind] = 0;
                --ind;
            }
        }
    }

    if (ind == 0) return true; // if the stack is empty, then the input is OK
             else return false;
}

int main()
{
    cin>>input;

    cout<<verify (input);

    return 0;
}
