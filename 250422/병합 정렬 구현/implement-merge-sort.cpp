#include <iostream>

using namespace std;

int n;
int arr[100000];

void merge(int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int count = low;
    int merged[100000];
    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            merged[count] = arr[i];
            i++;
            count++;
        }
        else {
            merged[count] = arr[j];
            j++;
            count++;
        }
    }
    while(i <= mid) {
        merged[count] = arr[i];
        i++;
        count++;
    }
    while(j <= high) {
        merged[count] = arr[j];
        j++;
        count++;
    }
    for(int i = low; i <= high; i++) {
        arr[i] = merged[i];
    }
}


void mergeSort(int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid+1, high);
        merge(low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(0, n-1);
    // Please write your code here.
    for(int i =0; i< n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
