#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

int N, M, gm, q; 
string group, member, qt; 
map<string, vector<string>> li; 

void tm_name(string s) {
  
  for (auto e: li) 
    for (auto i: e.second) 
      if (s == i) cout << e.first << endl; 
}

void tm_mem(string s) {

  for (auto e: li) 
    if (s == e.first) {
      sort(e.second.begin(), e.second.end()); 
      for (auto i: e.second) cout << i << endl; 
    }
}

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);

  cin >> N >> M; 
  for (int i=0; i<N; i++) {
    cin >> group >> gm; 
    for (int j=0; j<gm; j++) { cin >> member; li[group].push_back(member); }
  }

  for (int i=0; i<M; i++) {

    cin >> qt >> q; 
    if (q) tm_name(qt); 
    else tm_mem(qt); 
  }

  // for (auto e: li) {
  //   cout << e.first << ": "; 
  //   for (auto i: e.second) cout << i;
  //   cout << endl;
  // }

}