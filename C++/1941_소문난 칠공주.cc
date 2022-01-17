#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

char board[27];
int ans; 
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, -1, 0, 1};
bool check[27], arr[5][5], vis[5][5];
queue<pair<int, int>> q;

void func() {
  int t = 0;

  while(!q.empty()) {
    auto p = q.front(); q.pop(); t++; 
    for (int mv=0; mv < 4; mv++) {
      int nx = p.first +  dx[mv];
      int ny = p.second + dy[mv]; 

      if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;
      if (vis[nx][ny] || !arr[nx][ny]) continue;

      q.push({nx, ny}); vis[nx][ny] = 1; 
    }  
  }

  if (t >= 7) ans++; 
}

void princess() {
  do {    
    q = queue<pair<int, int>>();
    memset(arr, 0, sizeof(arr));
    memset(vis, 0, sizeof(vis)); 
    int cnt = 0;
    
    for (int i=0; i < 25; i++) 
      if (!check[i]) {
        int cx = i / 5, cy = i % 5; 
        arr[cx][cy] = 1; 

        if (q.empty()) { q.push({cx, cy}); vis[cx][cy] = 1; }
        if (board[i] == 'S') cnt++;
      }

    if (cnt >= 4) func(); 
  } while (next_permutation(check, check+25));
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  for (int i=0; i < 25; i++) cin >> board[i]; 
  fill(check+7, check+25, 1);  
    
  princess();
  cout << ans;
} 