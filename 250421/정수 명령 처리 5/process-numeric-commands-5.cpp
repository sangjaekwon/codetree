#include <iostream>
#include <vector>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;
    vector<int> vec;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
            if(command[i] == "push_back") vec.push_back(num[i]);
            if(command[i] == "get") cout << vec[num[i]-1] << endl;
        }
        if(command[i] == "size") cout << vec.size() << endl;
        if(command[i] == "pop_back") vec.pop_back();
    }

    // Please write your code here.

    return 0;
}
