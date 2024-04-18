#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

int saw[4][8];
int K, N, d, tmp, ans;
bool fl;
string s; 

void mf(int n) {

  tmp = saw[n][7]; 
  for(int i=7; i>0; i--) saw[n][i] = saw[n][i-1];
  saw[n][0] = tmp;
}

void mb(int n) {

  tmp = saw[n][0];
  for (int i=0; i<7; i++) saw[n][i] = saw[n][i+1];
  saw[n][7] = tmp; 
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  for (int i=0; i<4; i++) {
    cin >> s; 
    for (int j=0; j<8; j++) saw[i][j] = s[j] - '0';
  }
  
  cin >> K;
  while(K--) {
    vector <pair<int, int>> v; 
    cin >> N >> d; 

    if (d == -1) { fl = false; v.push_back({N-1, 0}); }
    else { fl = true; v.push_back({N-1, 1}); }
    bool f1 = fl, f2 = fl;

    for (int i=N-1; i>0; i--) 
      if (saw[i][6] != saw[i-1][2]) { f1 = !f1; v.push_back({i-1, f1}); }
      else break; 
    
    for (int i=N-1; i<3; i++)
      if (saw[i][2] != saw[i+1][6]) { f2 = !f2; v.push_back({i+1, f2}); }
      else break;
    
    for (auto i: v) {
      (i.second == 0) ? mb(i.first) : mf(i.first);  
    }
      
  }
  for (int i=0, j=1; i<4; i++, j*=2)
    if (saw[i][0]) ans += j; 

  cout << ans; 
}