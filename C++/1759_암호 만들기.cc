#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

char alpha[17], sltn[17];
int l, c;

bool check(char a) {
  if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    return 1; 
  
  return 0; 
}

void pwd(int n, int p) {
  if (n == l) {
    bool stfy = false; int cnt1 = 0, cnt2 = 0;
    for (int i=0; i < l; i++) {
      if(check(sltn[i])) cnt1++; 
      else cnt2++; 
    }

    if (cnt1 >= 1 && cnt2 >= 2) stfy = true;

    if (stfy) {
      for (int i=0; i < l; i++) 
        cout << sltn[i];
    cout << endl; 
    }
    return; 
  }

 
  for (int i=p; i < c; i++) {
    sltn[n] = alpha[i]; 
    pwd(n+1, i+1); 
  }
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> l >> c;
  for (int i=0; i < c; i++)
    cin >> alpha[i];

  sort(alpha, alpha+c);
  pwd(0, 0);
} 
