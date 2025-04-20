#include <iostream>

using namespace std;

int n;
int arr[100];


int funcMax(int n) {
    if(n==0) {
        return arr[0];
    }
    int max = funcMax(n-1);
    return max > arr[n] ? max : arr[n];

}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << funcMax(n);
    return 0;
}