#include <iostream>

using namespace std;

int n;
int arr[100000];


void merge(int arr2[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int count = low;
    int mergearr[100000];
    while(i <= mid && j <= high) {
        if(arr2[i] <= arr2[j]) {
            mergearr[count] = arr2[i];
            count++;
            i++;
        }
        else {
            mergearr[count] = arr2[j];
            count++;
            j++;
        }
    
    }
    while(i <= mid) {
        mergearr[count] = arr2[i];
        i++;
        count++;
    }
    while(j <= high) {
        mergearr[count] = arr2[j];
        j++;
        count++;
    }
    for(int i =0; i<=high; i++) {
        arr[i] = mergearr[i];
    }
}


void merge_sort(int arr2[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr2, low, mid);
        merge_sort(arr2, mid+1, high);
        merge(arr2, low, mid, high);
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
