#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[10]; 

void nm(int n, int m, int k) {
  if (k == m) {
    for (int i=0; i < m; i++) cout << arr[i] << ' ';
    cout << endl; return; 
  }

  for (int i=1; i <= n; i++) {
    arr[k] = i;
    nm(n, m, k+1);  
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m; cin >> n >> m; 
  nm(n, m, 0); 
} 
