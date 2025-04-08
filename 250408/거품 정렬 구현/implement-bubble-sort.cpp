#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp;
    for(int i =0; i<sizeof(arr) / sizeof(arr[0])-1; i++) {
        for(int j =i+1; j < sizeof(arr)/sizeof(arr[0]); j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i =0; i< sizeof(arr) / sizeof(arr[0]); i++) {
        if(arr[i] != 0) {
            cout << arr[i] << " ";
        }
    }
    // Please write your code here.

    return 0;
}
