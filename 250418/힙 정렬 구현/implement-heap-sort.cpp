#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100001];


void heapify(int i, int n) {
    int largest = i;
    int r = i*2;
    int l = i*2 +1;

    if(r <= n && arr[largest] < arr[r]) {
        largest = r;
    }
    if(l <= n && arr[largest] < arr[l]) {
        largest = l;
    }

    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(largest , n);
    }
}

void heap_sort(int n) {

    for(int i = n/2; i>0; i--) {
        heapify(i, n);
    }

    for(int i =n; i>1;) {
        swap(arr[1], arr[i]);
        heapify(1, --i);
    }

}



int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    heap_sort(n);
    // Please write your code here.
    for(int i =1; i<=n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}






