#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i =0; i< n; i++) {
        int temp = arr[i];
        int index = i;
        for(int j=i+1; j<n; j++) {
            if(temp > arr[j]) {
                temp = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = temp;
        cout << arr[i] << " ";
    }
    // Please write your code here.
    return 0;
}
