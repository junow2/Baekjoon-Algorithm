#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int arr[20], n, s, cnt; 

void sub(int ttl, int num) {
  
  if (num == n) {
    if (ttl == s) cnt++;
    return; 
  }

  sub(ttl, num+1);
  sub(ttl+arr[num], num+1);
}

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  cin >> n >> s; 
  for (int i=0; i < n; i++)
    cin >> arr[i]; 

  sub(0, 0); 
  if (s == 0) cnt--; cout << cnt;   
} 
