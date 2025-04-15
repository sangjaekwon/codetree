#include <iostream>

using namespace std;

int n;
int arr[100000];


void merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int count = low;
    int mergearr[100000];
    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) {
            mergearr[count] = arr[i];
            count++;
            i++;
        }
        else {
            mergearr[count] = arr[j];
            count++;
            j++;
        }
    
    }
    while(i <= mid) {
        mergearr[count] = arr[i];
        i++;
        count++;
    }
    while(j <= high) {
        mergearr[count] = arr[j];
        j++;
        count++;
    }
    for(int i =0; i<=high; i++) {
        arr[i] = mergearr[i];
    }
}


void merge_sort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    merge_sort(arr, 0, n-1);

    for(int i =0; i< n; i ++) {
        cout << arr[i] << " ";
    }
    return 0;
}
