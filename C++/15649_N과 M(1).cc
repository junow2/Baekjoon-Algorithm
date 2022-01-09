#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[10], used[10]; 

void nm(int n, int m, int k) {
  if (k == m) {
    for (int i=0; i < m; i++) cout << arr[i] << ' ';
    cout << endl; return; 
  }

  for (int i=1; i <= n; i++) {
    if (used[i]) continue; 
    arr[k] = i;
    used[i] = 1;
    nm(n, m, k+1);
    used[i] = 0;  
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m; cin >> n >> m; 
  nm(n, m, 0); 
} 
