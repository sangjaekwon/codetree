#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;
    stack<int> s;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            s.push(value[i]);
        }
        if(command[i] == "size") cout << s.size() << endl;
        if(command[i] == "pop") {
            if(!s.empty()) {
                int top = s.top();
                cout << top << endl;
                s.pop();
            }
        }
        if(command[i] == "empty") cout << s.empty() << endl;
        if(command[i] == "top") cout << s.top() << endl;
    }

    // Please write your code here.

    return 0;
}
