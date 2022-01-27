#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m, k, r, c; 
int board[42][42], paper[12][12];

bool check(int x, int y) {
  for (int i=0; i < r; i++) 
    for (int j=0; j < c; j++) 
      if (board[x+i][y+j] == 1 && paper[i][j] == 1) return false; 

  for (int i=0; i < r; i++) 
    for (int j=0; j < c; j++) 
      if (paper[i][j] == 1) board[x+i][y+j] = 1; 


  return true; 
}

void rotate() {
  int rotat[12][12]; 

  for (int i=0; i < r; i++)
    for (int j=0; j < c; j++)
      rotat[i][j] = paper[i][j]; 

  for (int i=0; i < c; i++)
    for (int j=0; j < r; j++)
      paper[i][j] = rotat[r-j-1][i]; 

  swap(r, c);
}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> m >> k;
  for (int t=0; t < k; t++) {
    cin >> r >> c; 
    for (int a=0; a < r; a++)
      for (int b=0; b < c; b++)
        cin >> paper[a][b];

    for (int rot=0; rot < 4; rot++) {
      bool is_match = false;
      for (int x=0; x <= n-r; x++) {
        if (is_match) break;  
        for (int y=0; y <= m-c; y++) {
          if (check(x, y)) {
            is_match = true; 
            break; 
          }
        }
      }
      if (is_match) break;
      rotate();
    }
  }

  int cnt = 0; 
  for (int i=0; i < n; i++)
    for (int j=0; j < m; j++)
      cnt += board[i][j]; 
  cout << cnt; 
}