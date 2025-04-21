#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000];


void digitSort() {
    int p = 1;
    for(int i = 0; i < 6; i++) {
        vector<int> vec[10];
        for(int i = 0; i< n; i++) {
            int digit = (arr[i] / p) %10;
            vec[digit].push_back(arr[i]);
        }
        int count = 0;
        for(int i = 0; i< 10; i++) {
            for(int j= 0; j < vec[i].size(); j++) {
                arr[count] = vec[i][j];
                count++;
            }
        }
        p*=10;
    }
}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    digitSort();
    // Please write your code here.
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
