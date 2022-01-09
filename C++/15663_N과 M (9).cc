#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[10], num[10], isused[10]; 

void nm(int n, int m, int k) {
  if (k == m) {
    for (int i=0; i < m; i++) cout << arr[i] << ' ';
    cout << endl; return; 
  }

  int cmp = 0; 
  for (int i=0; i < n; i++) {
    if (isused[i] || cmp == num[i]) continue;
    arr[k] = num[i]; isused[i] = 1; cmp = arr[k];
    nm(n, m, k+1);
    isused[i] = 0;
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m; cin >> n >> m; 
  for (int i=0; i < n; i++)
    cin >> num[i];
  sort(num, num+n); 
  nm(n, m, 0); 
} 
