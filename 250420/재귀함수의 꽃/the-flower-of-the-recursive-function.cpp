#include <iostream>

using namespace std;

int N;

void printStar(int n) {
    if(n == 0) return;

    cout << n << " ";
    printStar(n-1);
    cout << n << " ";

    
}



int main() {
    cin >> N;

    // Please write your code here.
    printStar(N);
    return 0;
}