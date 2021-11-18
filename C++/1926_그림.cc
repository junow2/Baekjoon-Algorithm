#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int board[502][502];
bool vis[502][502];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, m, mx = 0, num = 0; 
  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
  queue<pair<int, int>> q;

  cin >> n >> m;
  for (int j=0; j < n; j++) {
    for (int k=0; k < m; k++) cin >> board[j][k];
  }

  for (int j=0; j < n; j++) {
    for (int k=0; k < m; k++) {
      if (!board[j][k] || vis[j][k]) continue;

      num++;
      vis[j][k] = 1; q.push({j, k});
      int width = 0;
      while(!q.empty()) {
        width++;
        auto cur = q.front(); q.pop();

        for (int dir=0; dir < 4; dir++) {
          int nx = cur.first + dx[dir];
          int ny = cur.second + dy[dir];
          if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
          if (vis[nx][ny] || board[nx][ny] != 1) continue;

          vis[nx][ny] = 1;
          q.push({nx, ny});
        }
      }
      if (width > mx) mx = width;
    }
  }
  cout << num << '\n';
  cout << mx;
}
