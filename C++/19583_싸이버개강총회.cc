#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
#define endl '\n'
#define MAX 1000002 

string S, E, Q;
int st, et, qt, ct, ans; 
unordered_set <string> li; 

int time(string s) {
  
  string h = s.substr(0,2) + s.substr(3);
  return stoi(h); 
}

int main(void) {  
  ios::sync_with_stdio(false); cin.tie(NULL);
   
  cin >> S >> E >> Q; 
  
  st = time(S); et = time(E); qt = time(Q);

  while(1) {
    string T, Id; cin >> T >> Id;

    if (T == "" && Id == "") break;

    ct = time(T); 
    
    if (ct <= st) li.insert(Id); 
    if (ct >= et && ct <= qt) 
      if(li.find(Id) != li.end()) { ans++; li.erase(Id); }
  }

  cout << ans;
}