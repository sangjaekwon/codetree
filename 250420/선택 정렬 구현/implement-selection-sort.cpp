#include <iostream>

using namespace std;

int n;
int arr[100];


void select(int n) {
    for(int i =0; i<n-1; i++) {
        int index = i;
        for(int j = i+1; j<n; j++) {
            if(arr[index] > arr[j]) {
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }

}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    select(n);

    for(int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    // Please write your code here.
    return 0;
}
