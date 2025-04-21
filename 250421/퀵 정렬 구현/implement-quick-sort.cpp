#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100000];

int partition(int low, int high) {
    int pivot = arr[high];
    int i = low-1;


    for(int j = low; j<high; j++) {
        if(pivot > arr[j]) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i+1], arr[high]);

    return i+1;




}



void quickSort(int low, int high) {
    if(low <high) {
        int pos = partition(low, high);
        quickSort(low, pos-1);
        quickSort(pos+1, high);
    }
}




int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(0, n-1);
    // Please write your code here.
    for(int i =0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
