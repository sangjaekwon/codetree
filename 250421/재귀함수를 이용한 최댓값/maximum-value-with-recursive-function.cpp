#include <iostream>

using namespace std;

int n;
int arr[100];

int maxNum(int n) {
    if(n == 0) return arr[0];

    int max = maxNum(n-1);
    return arr[n] > max ? arr[n] : max;
}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxNum(n-1);
    // Please write your code here.

    return 0;
}