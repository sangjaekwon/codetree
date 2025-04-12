#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000];

void radix_sort(int arr[], int count) {
    for(int k = count; k > 0; k--) {
        vector<int> arr_new[10];
        for(int i = 0; i< n; i++) {
            int posth = arr[i];
            for(int j = 0; j <count - k ; j++) {
                posth = posth / 10;
            }
            int digit = posth % 10;
            arr_new[digit].push_back(arr[i]);
        }
        int storage_arr[n];
        int c = 0;
        for(int i =0; i<10; i++) {
            for(int j = 0; j<arr_new[i].size(); j++) {
                storage_arr[c] = arr_new[i].at(j);
                c++;
            }
        }

        for(int i =0; i< n; i++) {
            arr[i] = storage_arr[i];
        }

    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max =0;
    for(int i =0; i< n; i++) {
        if( arr[i] > max) {
            max = arr[i];
        }
    }
    int count= 1;
    while( max / 10 != 0) {
        max /= 10;
        count++;
    }
    radix_sort(arr, count);
    // Please write your code here.
    for(int i = 0; i< n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
