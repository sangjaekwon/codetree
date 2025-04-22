#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[100000];

void digitSort() {
    int p = 1;
    for(int i = 0; i<6; i++) {
        vector<int> vec[10];
        for(int j = 0; j<n; j++) {
            int digit = (arr[j]/p) % 10;
            vec[digit].push_back(arr[j]);
        }
        int count = 0;
        for(int j = 0; j <10; j++) {
            for(int k = 0; k<vec[j].size(); k++) {
                arr[count] = vec[j][k];
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
    for(int i =0; i< n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
