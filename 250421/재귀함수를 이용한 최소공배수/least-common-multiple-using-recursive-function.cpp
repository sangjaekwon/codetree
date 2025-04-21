#include <iostream>

using namespace std;

int n;
int arr[10];

int maxY(int a, int b) {
    int max = 1;
    if(a > b) {
        for(int i = 1; i<= b; i++) {
            if(a % i == 0 && b % i == 0) {
                max = i;
            }
        }
    } 
    else {
          for(int i = 1; i<= a; i++) {
            if(a % i == 0 && b % i == 0) {
                max = i;
            }
        }  
    }
    return a * b / max;
}

int minX(int n) {
    if(n ==0 ) return arr[0];

    return maxY(arr[n], minX(n-1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << minX(n-1);
    // Please write your code here.

    return 0;
}