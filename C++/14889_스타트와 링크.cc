#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, res=987654321, tmp, team1, team2;
int people[22][22], check[22];

void func(int x, int t) {
  if (t == n/2) {
    team1 = 0, team2 = 0; 
    for (int i=0; i < n; i++) {
      for (int j=0; j < n; j++) {
        
        if (check[i] && check[j]) team1 += people[i][j];
        if (!check[i] && !check[j]) team2 += people[i][j]; 
      }
    }

    tmp = abs(team1 - team2); 
    if (tmp < res) res = tmp; 
    return; 
  }

  for (int i = x; i < n; i++) {
    if (check[i]) continue; 

    check[i] = true; 
    func(i, t+1);
    check[i] = false;  
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
 
  cin >> n; 
  for (int i=0; i < n; i++)
    for (int j=0; j < n; j++) 
      cin >> people[i][j]; 
    func(0, 0);
    cout << res; 
}