#include <iostream>
#include <algorithm>

#define MAX_N 100000

using namespace std;

int n;
int arr[100000];

int Partition(int low, int high) {
    int pivot = arr[high];              // pivot을 고릅니다.
    int i = low - 1;                    // 파란색 화살표 위치를 정해줍니다.
                                        // 파란색 화살표는 pivot보다 같거나 큰 
                                        // 원소를 가리키고 있습니다.
    for(int j = low; j < high; j++)     // 빨간색 화살표를 움직입니다.
        if(arr[j] < pivot) {            // 빨간색 화살표가 가리키는 원소가
            i++;                        // pivot보다 작다면, 왼쪽으로 가야하므로
            swap(arr[i], arr[j]);       // 두 원소의 위치를 바꿔줍니다.
        }
    
    swap(arr[i + 1], arr[high]);        // 최종적으로 pivot을
                                        // 경계에 있는 원소와 교환해줍니다.
                                        // 이때 경계는 마지막 파란색 화살표 위치에
                                        // 1을 더한 위치입니다.
    return i + 1;                       // pivot의 최종 위치를 반환해줍니다.
}

void QuickSort(int low, int high) {
    if(low < high) {                    // 원소의 개수가 2개 이상인 경우에만 진행
        int pos = Partition(low, high); // pivot 기준으로 좌우로 분할 한 후
                                        // 해당 pivot의 위치를 pos에 넣어줍니다.
        QuickSort(low, pos - 1);        // pivot의 왼쪽 구간에 있는 원소들을 정렬합니다. 
        QuickSort(pos + 1, high);       // pivot의 오른쪽 구간에 있는 원소들을 정렬합니다.
    }
}

int main() {
    // 입력
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    QuickSort(0, n - 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
