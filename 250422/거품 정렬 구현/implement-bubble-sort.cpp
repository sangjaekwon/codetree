#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];


void bubbleSort(int n) {
    bool sorted = false;
    do {
        sorted = true;
        for(int i = 0; i<n; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                sorted = false;
            }
        }
    } while(sorted == false);
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    bubbleSort(n-1);

    for(int i =0; i< n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
