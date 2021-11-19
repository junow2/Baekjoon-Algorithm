#include <bits/stdc++.h>
using namespace std;
typedef long long li;

int board[100002];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, k; cin >> n >> k;
  queue<int> q;
  
  fill(board, board+100002, -1);
  board[n] = 0; q.push(n);

  while(board[k] == -1) {
    int cur = q.front(); q.pop();
    for (int dir: {cur-1, cur+1, cur*2}) {
      if (dir < 0 || dir > 100000) continue;
      if (board[dir] != -1) continue;
      board[dir] = board[cur] + 1;
      q.push(dir);  
    }
  }
  cout << board[k];
}