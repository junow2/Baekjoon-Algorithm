#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[10], num[10]; 

void nm(int n, int m, int k) {
  if (k == m) {
    for (int i=0; i < m; i++) cout << arr[i] << ' ';
    cout << endl; return; 
  }

  int cmp = 0; 
  for (int i=0; i < n; i++) {
    if (cmp == num[i]) continue;

    arr[k] = num[i]; cmp = arr[k];
    nm(n, m, k+1);
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
