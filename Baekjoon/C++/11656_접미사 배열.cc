#include <bits/stdc++.h>
using namespace std; 
#define endl '\n'
typedef long long ll;
#define MAX 2000000
const int INF = 10002; 

string S, tmp;
vector <string> v; 

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> S;
  for (int i=0; i<S.length(); i++) {
    tmp = S.substr(i, S.length()-i); 
    v.push_back(tmp); 
  }
  sort(v.begin(), v.end());
  for (string s: v) cout << s << endl;
}