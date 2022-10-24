#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'

int N, M, V, a, b, mx; 
int Board[1002][1002]; 
bool vis[1002]; 
queue <int>q; 

void DFS(int T) {
  
  vis[T] = true; 

  cout << T << ' ';

  for (int i=1; i <= N; i++)
    if (Board[T][i] && !vis[i]) DFS(i); 
}

void BFS(int T) {

  q.push(T); vis[T] = true; 

  cout << T << ' ';

  while(!q.empty()) {
    T = q.front(); q.pop(); 

    for (int i=1; i <= N; i++)  
      if (Board[T][i] && !vis[i]) {
       
        q.push(i); vis[i] = true; 
        cout << i << ' ';
      }
  }


}

int main(void) {
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M >> V; 
  for (int i=0; i < M; i++) {
    cin >> a >> b;

    Board[a][b] = 1; Board[b][a] = 1; 
  }

  DFS(V); 
  fill(vis, vis+N+1, 0); cout << endl; 
  BFS(V); 
} 