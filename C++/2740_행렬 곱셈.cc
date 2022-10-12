#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int A[102][102], B[102][102], C[102][102];

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  int n, m, c, k; cin >> n >> m; 
  for (int i=0; i<n; i++)
    for (int j=0; j<m; j++) cin >> A[i][j]; 
    
  cin >> c >> k;
  for (int i=0; i<c; i++) 
    for (int j=0; j<k; j++) cin >> B[i][j];
  
  for (int i=0; i<n; i++) 
    for (int j=0; j<k; j++) 
      for (int w=0; w<m; w++) C[i][j] += A[i][w] * B[w][j];  
      
  for (int i=0; i<n; i++) {
    for (int j=0; j<k; j++) cout << C[i][j] << ' '; 
    cout << endl; 
  }
}