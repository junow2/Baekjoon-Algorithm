#include <bits/stdc++.h>
using namespace std;

int arr[5];
int sum_n;

int main(void) {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum_n += arr[i];
    }
    cout << sum_n / 5 << endl;
    sort(arr, arr+5);
    cout << arr[2];    
}
