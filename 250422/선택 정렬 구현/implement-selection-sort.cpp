#include <iostream>

using namespace std;

int n;
int arr[100];


void selectSort() {
    
    for(int i = 0; i<n-1; i++) {
        int index = i;
        for(int j = i; j<n; j++) {
            if(arr[index] > arr[j]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    selectSort();
    for(int i =0; i< n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
